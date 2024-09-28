#include <iostream>
using namespace std;

int binarySearchRecursive(int arr[], int low, int high, int target) {
    if (low <= high) {
        int mid = low + (high - low) / 2;  

        if (arr[mid] == target) {
            return mid; 
        }
        else if (arr[mid] < target) {
            return binarySearchRecursive(arr, mid + 1, high, target);  
        }
        else {
            return binarySearchRecursive(arr, low, mid - 1, target);  
        }
    }

    return -1;  
}

int main() {
    int arr[] = {2, 3, 4, 10, 40};
    int size = sizeof(arr) / sizeof(arr[0]);
    int target = 10;
    int result = binarySearchRecursive(arr, 0, size - 1, target);

    if (result != -1) {
        cout << "Element found at index " << result << endl;
    } else {
        cout << "Element not found" << endl;
    }

    return 0;
}
