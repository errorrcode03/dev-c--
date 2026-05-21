#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX 30

typedef struct {
    int r, c;      // top-left cell
    char ori;      // 'H' for horizontal, 'V' for vertical
    int dist;      // steps so far
} State;

int M, N;
char grid[MAX][MAX];
int visited[MAX][MAX][2]; // 0 for H, 1 for V

// Check cell validity (within grid & not household)
int freeCell(int r, int c) {
    return (r >= 0 && r < M && c >= 0 && c < N && grid[r][c] != 'H');
}

// Normalize state (to detect target)
int isTarget(State s, int tr, int tc, char to) {
    return (s.r == tr && s.c == tc && s.ori == to);
}

// BFS queue
State queue[MAX * MAX * 4];
int front = 0, rear = 0;

void push(State s) { queue[rear++] = s; }
State pop() { return queue[front++]; }
int empty() { return front == rear; }

int main() {
    scanf("%d %d", &M, &N);
    for (int i = 0; i < M; i++) {
        for (int j = 0; j < N; j++) {
            scanf(" %c", &grid[i][j]);
        }
    }

    // Find start and target sofa
    int sr1=-1, sc1=-1, sr2=-1, sc2=-1;
    int tr1=-1, tc1=-1, tr2=-1, tc2=-1;

    for (int i = 0; i < M; i++) {
        for (int j = 0; j < N; j++) {
            if (grid[i][j] == 's') {
                if (sr1 == -1) { sr1=i; sc1=j; } else { sr2=i; sc2=j; }
            }
            if (grid[i][j] == 'S') {
                if (tr1 == -1) { tr1=i; tc1=j; } else { tr2=i; tc2=j; }
            }
        }
    }

    // Normalize start state
    State start, target;
    if (sr1 == sr2) { // horizontal
        start.r = sr1;
        start.c = (sc1 < sc2 ? sc1 : sc2);
        start.ori = 'H';
    } else {
        start.r = (sr1 < sr2 ? sr1 : sr2);
        start.c = sc1;
        start.ori = 'V';
    }
    start.dist = 0;

    // Normalize target
    if (tr1 == tr2) {
        target.r = tr1;
        target.c = (tc1 < tc2 ? tc1 : tc2);
        target.ori = 'H';
    } else {
        target.r = (tr1 < tr2 ? tr1 : tr2);
        target.c = tc1;
        target.ori = 'V';
    }

    memset(visited, 0, sizeof(visited));
    front = rear = 0;
    push(start);
    visited[start.r][start.c][(start.ori=='H'?0:1)] = 1;

    while (!empty()) {
        State cur = pop();

        if (isTarget(cur, target.r, target.c, target.ori)) {
            printf("%d\n", cur.dist);
            return 0;
        }

        if (cur.ori == 'H') {
            // sofa covers (r,c) and (r,c+1)
            // moves
            int dirs[4][2] = {{1,0},{-1,0},{0,1},{0,-1}};
            for (int d=0; d<4; d++) {
                int nr = cur.r + dirs[d][0];
                int nc = cur.c + dirs[d][1];
                if (freeCell(nr, nc) && freeCell(nr, nc+1)) {
                    if (!visited[nr][nc][0]) {
                        visited[nr][nc][0] = 1;
                        State nxt = {nr,nc,'H',cur.dist+1};
                        push(nxt);
                    }
                }
            }
            // rotation check in 2x2 block
            if (freeCell(cur.r,cur.c) && freeCell(cur.r+1,cur.c) &&
                freeCell(cur.r,cur.c+1) && freeCell(cur.r+1,cur.c+1)) {
                // rotate around left cell
                if (!visited[cur.r][cur.c][1]) {
                    visited[cur.r][cur.c][1] = 1;
                    State nxt = {cur.r,cur.c,'V',cur.dist+1};
                    push(nxt);
                }
                // rotate around right cell
                if (!visited[cur.r][cur.c+1][1]) {
                    visited[cur.r][cur.c+1][1] = 1;
                    State nxt = {cur.r,cur.c+1,'V',cur.dist+1};
                    push(nxt);
                }
            }
        } else { // Vertical
            // sofa covers (r,c) and (r+1,c)
            int dirs[4][2] = {{1,0},{-1,0},{0,1},{0,-1}};
            for (int d=0; d<4; d++) {
                int nr = cur.r + dirs[d][0];
                int nc = cur.c + dirs[d][1];
                if (freeCell(nr, nc) && freeCell(nr+1, nc)) {
                    if (!visited[nr][nc][1]) {
                        visited[nr][nc][1] = 1;
                        State nxt = {nr,nc,'V',cur.dist+1};
                        push(nxt);
                    }
                }
            }
            // rotation check in 2x2 block
            if (freeCell(cur.r,cur.c) && freeCell(cur.r+1,cur.c) &&
                freeCell(cur.r,cur.c+1) && freeCell(cur.r+1,cur.c+1)) {
                // rotate to horizontal top
                if (!visited[cur.r][cur.c][0]) {
                    visited[cur.r][cur.c][0] = 1;
                    State nxt = {cur.r,cur.c,'H',cur.dist+1};
                    push(nxt);
                }
                // rotate to horizontal bottom
                if (!visited[cur.r+1][cur.c][0]) {
                    visited[cur.r+1][cur.c][0] = 1;
                    State nxt = {cur.r+1,cur.c,'H',cur.dist+1};
                    push(nxt);
                }
            }
        }
    }

    printf("Impossible\n");
    return 0;
}
