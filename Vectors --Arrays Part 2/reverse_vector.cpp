#include <iostream>
#include <vector>
#include <algorithm>  // For std::reverse
using namespace std;

int main() {
    vector<int> vec = {1, 2, 3, 4, 5};  // Example vector

    // Reverse the vector using std::reverse
    reverse(vec.begin(), vec.end());

    // Output the reversed vector
    cout << "Reversed vector: ";
    for (int num : vec) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}
