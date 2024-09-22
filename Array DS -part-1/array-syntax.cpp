#include <iostream>  // Include the iostream library for input and output

int main() {
    int numbers[5] = {10, 20, 30, 40, 50}; // Array of size 5 with initial values

    // Accessing elements using indexing
    std::cout << "First element: " << numbers[0] << std::endl;   // Output: 10
    std::cout << "Second element: " << numbers[1] << std::endl;  // Output: 20

    // Modifying elements using indexing

    numbers[2] = 100; // Change the third element from 30 to 100

    std::cout << "Modified third element: " << numbers[2] << std::endl; // Output: 100

    // Iterating over the array using a loop

    for (int i = 0; i < 5; i++) {  // Loop from 0 to 4 (size of the array - 1)
        std::cout << "Element at index " << i << ": " << numbers[i] << std::endl;
    }

    return 0; 
}
