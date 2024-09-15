#include <iostream>
#include <vector>
using namespace std;

int findUniqueNumber(const vector<int>& nums) {
    int unique = 0;

    // XOR all the elements in the array
    for (int num : nums) {
        unique ^= num;
    }

    return unique;
}

int main() {
   
    vector<int> nums = {4, 1, 2, 1, 2, 4, 5};

    int uniqueNumber = findUniqueNumber(nums);

    cout << "The unique number is: " << uniqueNumber << endl;    // Output: 5

    return 0;
}
#include <iostream>
#include <vector>
using namespace std;

int findUniqueNumber(const vector<int>& nums) {
    int unique = 0;

    // XOR all the elements in the array
    for (int num : nums) {
        unique ^= num;
    }

    return unique;
}

int main() {
    // Example array where every number appears twice except one
    vector<int> nums = {4, 1, 2, 1, 2, 4, 5};

    int uniqueNumber = findUniqueNumber(nums);

    cout << "The unique number is: " << uniqueNumber << endl;  // Output: 5

    return 0;
}
