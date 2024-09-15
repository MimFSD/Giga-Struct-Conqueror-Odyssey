#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> vec = {5, 10, 15, 20};

    cout << "Element at index 2: " << vec[2] << endl;  // Output: 15
    cout << "Element at index 3: " << vec.at(3) << endl;  // Output: 20

    cout << "Size of the vector: " << vec.size() << endl;  // Output: 4

    for (int i = 0; i < vec.size(); i++) {
        cout << "Element at index " << i << ": " << vec[i] << endl;
    }

    return 0;
}
