#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        int left = 0;
        int right = arr.size() - 1;

        while (left < right) {
            int mid = left + (right - left) / 2;

            if (arr[mid] < arr[mid + 1]) {
                left = mid + 1;
            } 
            else {
                right = mid;
            }
        }

        return left;
    }
};

int main() {
    Solution solution;
    vector<int> arr = {0, 2, 3, 4, 5, 3, 1};  

    int peakIndex = solution.peakIndexInMountainArray(arr);

    cout << "Peak index: " << peakIndex << endl;  

    return 0;
}
