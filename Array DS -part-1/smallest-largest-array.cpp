#include <iostream>
#include <limits> // For numeric limits

using namespace std; // This line allows using standard library elements without the 'std::' prefix

int main() {
    int numbers[] = {3, 5, 2, 8, 1, 9, 4};
    int size = sizeof(numbers) / sizeof(numbers[0]);

    // Initialize smallest and largest with the maximum and minimum possible integer values
    int smallest = numeric_limits<int>::max(); // Initialize to the largest possible integer
    int largest = numeric_limits<int>::min();  // Initialize to the smallest possible integer

    for (int i = 0; i < size; i++) {
        if (numbers[i] < smallest) {
            smallest = numbers[i];
        }
        if (numbers[i] > largest) {
            largest = numbers[i];
        }
    }

    cout << "Smallest element: " << smallest << endl;
    cout << "Largest element: " << largest << endl;

    return 0;
}
