#include <iostream>
#include <vector>
using namespace std;

bool pairSum(vector<int>& arr, int target) {
    int n = arr.size();
    for (int i = 0; i < n - 1; ++i) {
        for (int j = i + 1; j < n; ++j) {
            if (arr[i] + arr[j] == target) {
                cout << "Pair found: (" << arr[i] << ", " << arr[j] << ")" << endl;
                return true;  
            }
        }
    }
    return false;
}

int main() {
    vector<int> arr = {2, 7, 11, 15};
    int target = 9;

    if (pairSum(arr, target)) {
        cout << "Pair with the given sum found." << endl; 
     
    } else {
        cout << "No pair with the given sum found." << endl;
    }

    return 0;
}
   //  Pair found: (2, 7)
        // Pair with the given sum found.