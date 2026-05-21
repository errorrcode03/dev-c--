#include <iostream>
#include <iomanip>
#include <vector>
using namespace std;

// Calculate PI using Chudnovsky Algorithm (Big Integer)
string calculatePi(int digits) {
  long long   int precision = digits + 10;
    vector<int> pi(precision, 0);

    int q = 1, r = 0, t = 1, k = 1, n = 3, l = 3;
    for (int i = 0; i < precision; i++) {
        int x = (q * 10) / t;
        int new_r = (q * 10) % t;

        q = t;
        t = t + 2;
        r = new_r;
        pi[i] = x;
    }

    string result = "3.";
    for (int i = 1; i < digits; i++) {
        result += char('0' + pi[i]);
    }

    return result;
}

int main() {
    int digits = 1000;
    string pi = calculatePi(digits);

    cout << pi << endl;
    return 0;
}
