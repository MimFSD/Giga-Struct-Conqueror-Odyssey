#include <iostream>
#include <vector>
using namespace std;

int main() {
    // Initializing a vector
    vector<int> vec = {5, 10, 15, 20};

    // Accessing vector elements using index
    cout << "Element at index 2: " << vec[2] << endl;  // Output: 15
    cout << "Element at index 3: " << vec.at(3) << endl;  // Output: 20

    // Getting the size of the vector
    cout << "Size of the vector: " << vec.size() << endl;  // Output: 4

    // Accessing all elements of the vector using a for loop
    for (int i = 0; i < vec.size(); i++) {
        cout << "Element at index " << i << ": " << vec[i] << endl;
    }

    return 0;
}
