#include <iostream>
#include <vector>
#include <climits>
using namespace std;


int maxSubArraySum(const vector<int>& arr) {
    int max_sum = arr[0];        // Initialize max_sum with the first element
    int current_sum = arr[0];    // Initialize current_sum with the first element

    for (int i = 1; i < arr.size(); i++) {
        // Either add the current element to the current_sum or start a new subarray with the current element


        current_sum = max(arr[i], current_sum + arr[i]);
        // Update max_sum if current_sum is larger
        max_sum = max(max_sum, current_sum);
    }

    return max_sum;
}

int main() {
    vector<int> arr = {-2, 1, -3, 4, -1, 2, 1, -5, 4};
    cout << "Maximum sub-array sum is: " << maxSubArraySum(arr) << endl;  //Maximum sub-array sum is: 6
    return 0;
}
