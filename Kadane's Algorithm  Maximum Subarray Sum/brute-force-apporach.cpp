#include <iostream>
#include <climits>  

using namespace std;

int maxSubarraySum(int arr[], int n) {
    int maxSum = INT_MIN; 




    // Iterate over all possible sub-arrays
    for (int i = 0; i < n; i++) {
        for (int j = i; j < n; j++) {
            int currentSum = 0;

            // Calculate the sum of sub-array arr[i:j]
            for (int k = i; k <= j; k++) {
                currentSum += arr[k];
            }
            // Update maxSum if the current sum is greater
            if (currentSum > maxSum) {
                maxSum = currentSum;
            }
        }
    }

    return maxSum;
}

int main() {
    int arr[] = {-2, 1, -3, 4, -1, 2, 1, -5, 4};
    int n = sizeof(arr) / sizeof(arr[0]);

    int result = maxSubarraySum(arr, n);
    cout << "Maximum sub-array sum is: " << result << endl;

    return 0;
}
