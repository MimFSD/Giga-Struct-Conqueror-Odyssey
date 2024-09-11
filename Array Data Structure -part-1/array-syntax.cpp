#include <iostream>
using namespace std;

int main() {
  #include <iostream> // Include necessary libraries

int main() {
    // Declaration and Initialization of an array
    int numbers[5] = {10, 20, 30, 40, 50}; // Array of size 5

    // Accessing elements using indexing
    std::cout << "First element: " << numbers[0] << std::endl;   // Output: 10
    std::cout << "Second element: " << numbers[1] << std::endl;  // Output: 20

    // Modifying elements using indexing
    numbers[2] = 100; // Changing the third element to 100

    std::cout << "Modified third element: " << numbers[2] << std::endl; // Output: 100

    // Iterating over an array using a loop
    for (int i = 0; i < 5; i++) {
        std::cout << "Element at index " << i << ": " << numbers[i] << std::endl;
    }

    return 0; // Return 0 to indicate successful execution
}

  return 0;
}