#include <iostream>
#include <algorithm>  
using namespace std;

int kadaneMaxSubarraySum(int arr[], int n) {
    int maxSum = arr[0];   // Initialize max sum with the first element
    int currentSum = arr[0];  // Initialize current sum as the first element

    // Iterate through the array from the second element
    for (int i = 1; i < n; i++) {
        // Update currentSum: either start a new sub-array or extend the current one
        currentSum = max(arr[i], currentSum + arr[i]);
        
        // Update maxSum if currentSum is greater
        maxSum = max(maxSum, currentSum);
    }

    return maxSum;
}

int main() {
    int arr[] = {-2, 1, -3, 4, -1, 2, 1, -5, 4};
    int n = sizeof(arr) / sizeof(arr[0]);

    int result = kadaneMaxSubarraySum(arr, n);
    cout << "Maximum subarray sum is: " << result << endl;

    return 0;
}
