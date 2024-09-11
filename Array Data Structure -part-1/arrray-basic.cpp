// dataType arrayName [arraySize];

#include <iostream>
using namespace std;

int main() {
    int numbers[5]; // Declares an integer array named 'numbers' with 5 elements.
    int numbers[5] = {1, 2, 3, 4, 5}; // Declares and initializes the 'numbers' array.

    int numbers[] = {1, 2, 3, 4, 5}; // The size of the array will be automatically determined by the number of elements.

    int numbers[5] = {10, 20, 30, 40, 50};
    int firstNumber = numbers[0]; // Accesses the first element (10)
    int secondNumber = numbers[1]; // Accesses the second element (20)

    int matrix[3][3] = {
    {1, 2, 3},
    {4, 5, 6},
    {7, 8, 9}
    };





  cout << "Hello World!";
  return 0;
}