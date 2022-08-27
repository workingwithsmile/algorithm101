// Implementing Binary Search in C++

#include <bits/stdc++.h>
using namespace std;

int binarySearch(int array[], int x, int low, int high) {
    while (low <= high) {
        int mid = (high + low) / 2;
        if (array[mid] == x)
            return mid;
        else if (array[mid] < x)
            low = mid + 1;
        else
            high = mid - 1;
    }
    return -1;
}

int main() {
    int arr [] = {1, 3, 5, 7, 9, 11, 13, 15};
    int searchElement = 4;
    int n = sizeof(arr) / sizeof(arr[0]);
    int result;
    
    // CASE 1: Searching for element 0 in arr.
    cout << "CASE 1: ";
    result = binarySearch(arr, searchElement, 0, n - 1);
    if (result == -1)
        cout << "Element not found" << "\n";
    else
        cout << "Element is found at index " << result << "\n";
    
    // CASE 2: Searching for element 9 in arr.
    cout << "CASE 2: ";
    searchElement = 9;
    result = binarySearch(arr, searchElement, 0, n - 1);
    if (result == -1)
        cout << "Element not found" << "\n";
    else
        cout << "Element is found at index " << result << "\n";
  
    return 0;
}
