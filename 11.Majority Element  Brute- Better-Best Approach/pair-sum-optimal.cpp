#include <iostream>
#include <unordered_set>
using namespace std;

void findPairWithSum(int arr[], int n, int targetSum) {
    unordered_set<int> seen; 

    for (int i = 0; i < n; i++) {
        int complement = targetSum - arr[i];
        if (seen.find(complement) != seen.end()) {
            cout << "Pair found: (" << arr[i] << ", " << complement << ")" << endl;
            return;
        }
        seen.insert(arr[i]);
    }
    cout << "No pair found with sum " << targetSum << endl;
}

int main() {
    int arr[] = {10, 15, 3, 7};
    int targetSum = 17;
    int n = sizeof(arr) / sizeof(arr[0]);
    findPairWithSum(arr, n, targetSum);

    return 0;
}
