#include <iostream>
using namespace std;

int sumOfDigits(int num) {
    int sum = 0;

    // Extract each digit and add it to the sum
    while (num != 0) {
        sum += num % 10; // Get the last digit
        num /= 10;       // Remove the last digit
    }

    return sum;
}

int main() {
    int number;

    cout << "Enter a number: ";
    cin >> number;

    // Ensure the number is positive
    if (number < 0) {
        number = -number;
    }

    cout << "Sum of digits: " << sumOfDigits(number) << endl;
    return 0;
}
