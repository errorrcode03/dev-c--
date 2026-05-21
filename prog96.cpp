#include <iostream>
using namespace std;

int gcd(int num1, int num2) {
	int smaller=min(num1,num2);
	int larger=max(num1,num2);
    while(smaller!=0)
    {
    	int temp=smaller;
    	smaller=larger%smaller;
    	larger=temp;
	}
	return larger;
}

int main() {
    cout << gcd(36, 60);
}
