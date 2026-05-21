#include<iostream>
using namespace std;

int main()
{
    char str[100];
    cin >> str;

    int size = 0;
    while (str[size] != '\0')  // manually find string length
        size++;

    int count = 0;
    for (int i = 0; i < size; i++)
    {
        cout << str[i];
        count++;

        if (count == 2)
        {
            cout << " ";
            count = 0;
        }
    }

    return 0;
}
