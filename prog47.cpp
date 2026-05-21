#include <iostream>
#include <string>
using namespace std;

int main() {
    string s = "Mindtree";
    s.erase(3, 2);   // erase 2 characters starting from index 3
    cout << s << endl;
    return 0;
}
