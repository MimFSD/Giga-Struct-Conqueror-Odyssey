#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> vec;

    // Adding elements to the vector
    vec.push_back(10);   // vec = [10]
    vec.push_back(20);   // vec = [10, 20]
    vec.push_back(30);   // vec = [10, 20, 30]

    // Accessing elements
    cout << "First element (front): " << vec.front() << endl;  // Output: 10
    cout << "Last element (back): " << vec.back() << endl;     // Output: 30
    cout << "Element at index 1: " << vec.at(1) << endl;       // Output: 20

    // Removing the last element
    vec.pop_back();  // vec = [10, 20]
    cout << "Last element after pop_back: " << vec.back() << endl;  // Output: 20

    return 0;
}
