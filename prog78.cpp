#include <iostream>
#include <vector>
using namespace std;

int binarySearch(vector<int>& arr, int target) {
    int low = 0;
    int high = arr.size() - 1;

    while (low <= high) {
        int mid = (low + high) / 2;

        if (arr[mid] == target)
            return mid;
        else if (arr[mid] < target)
            low = mid + 1;
        else
            high = mid - 1;
    }
    return -1;
}

int main() {
    vector<int> vec;
    int value, target;

    cout << "Enter sorted elements (type '-1' to end input): ";
    while (true) {
        cin >> value;
        if (value == -1) break;
        vec.push_back(value);
    }

    cout << "Enter the target element: ";
    cin >> target;

    int index = binarySearch(vec, target);
    if (index != -1)
        cout << "Target element found at index: " << index << endl;
    else
        cout << "Target element not found!" << endl;

    return 0;
}
