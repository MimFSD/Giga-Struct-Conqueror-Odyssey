#include <iostream>
#include <climits>
using namespace std;

int maxSubArraySum(int arr[], int n) {
    int max_sum = arr[0];      // Initialize max_sum with the first element
    int current_sum = arr[0];  // Initialize current_sum with the first element

    // Iterate through the array starting from the second element
    for (int i = 1; i < n; i++) {
        current_sum = max(arr[i], current_sum + arr[i]);  // Update current subarray sum
        max_sum = max(max_sum, current_sum);              // Update max_sum if needed
    }

    return max_sum;
}

int main() {
    int arr[] = {-2, 1, -3, 4, -1, 2, 1, -5, 4};
    int n = sizeof(arr) / sizeof(arr[0]);

    cout << "Maximum subarray sum is: " << maxSubArraySum(arr, n) << endl;
    return 0;
}
