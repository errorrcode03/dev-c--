#include <iostream>
#include <vector>
using namespace std;

long long fact(int n){
    long long res = 1;
    for(int i=2;i<=n;i++){
        res *= i;
    }
    return res;
}

long long permutations(vector<int>& freq){
    int total = 0;
    for(int i=0;i<256;i++){
        total += freq[i];
    }

    long long res = fact(total);

    for(int i=0;i<256;i++){
        if(freq[i] > 1){
            res /= fact(freq[i]);
        }
    }

    return res;
}

int rankOfWord(string s){
    vector<int> freq(256,0);

    for(char c : s){
        freq[c]++;
    }

    long long rank = 1;

    for(int i=0;i<s.length();i++){
        for(int ch=0; ch<s[i]; ch++){
            if(freq[ch] > 0){
                freq[ch]--;
                rank += permutations(freq);
                freq[ch]++;
            }
        }
        freq[s[i]]--;
    }

    return rank;
}

int main(){
    string s;
    cin >> s;

    cout << "Rank = " << rankOfWord(s);

    return 0;
}