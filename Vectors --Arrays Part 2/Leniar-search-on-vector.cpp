#include <iostream>
#include <vector>
using namespace std;

// Function to perform linear search
int linearSearch(const vector<int>& vec, int target) {
    for (size_t i = 0; i < vec.size(); ++i) {
        if (vec[i] == target) {
            return i;  // Return the index of the target element
        }
    }
    return -1;  // Return -1 if the target is not found
}

int main() {
    vector<int> vec = {10, 20, 30, 40, 50};  // Example vector
    int target = 30;  // Element to search for

    int index = linearSearch(vec, target);

    if (index != -1) {
        cout << "Element " << target << " found at index " << index << "." << endl;
    } else {
        cout << "Element " << target << " not found in the vector." << endl;
    }

    return 0;
}
