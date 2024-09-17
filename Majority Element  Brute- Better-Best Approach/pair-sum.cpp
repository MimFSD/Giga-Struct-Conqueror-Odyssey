#include <iostream>
#include <vector>
using namespace std;

vector<pair<int, int>> pairSumBruteForce(const vector<int>& arr, int target) {
    vector<pair<int, int>> result;
    int n = arr.size();
    
    // Iterate through each element in the array
    for (int i = 0; i < n; ++i) {
        // Iterate through the remaining elements
        for (int j = i + 1; j < n; ++j) {
            if (arr[i] + arr[j] == target) {
                result.push_back({arr[i], arr[j]});
            }
        }
    }
    
    return result;
}

int main() {
    vector<int> arr = {1, 4, 2, 3, 5, 7};
    int target = 8;
    
    vector<pair<int, int>> result = pairSumBruteForce(arr, target);
    
    
    if (!result.empty()) {
        cout << "Pairs that sum to " << target << " are:" << endl;
        for (const auto& p : result) {
            cout << "(" << p.first << ", " << p.second << ")" << endl;
        }
    } else {
        cout << "No pairs found with the sum " << target << endl;
    }
    
    return 0;
}
