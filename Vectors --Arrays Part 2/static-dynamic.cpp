#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> vec;  // Create an empty vector

    // Add elements to the vector
    vec.push_back(10);
    vec.push_back(20);
    vec.push_back(30);

    // Check size and capacity
    cout << "Size: " << vec.size() << endl;        // Output: 3 (actual number of elements)
    cout << "Capacity: " << vec.capacity() << endl; // Output: >= 3 (capacity, may be larger)

    // Adding more elements to trigger reallocation (capacity increase)
    vec.push_back(40);
    vec.push_back(50);

    cout << "New Size: " << vec.size() << endl;     // Output: 5
    cout << "New Capacity: " << vec.capacity() << endl;  // Output: >= 5
}
