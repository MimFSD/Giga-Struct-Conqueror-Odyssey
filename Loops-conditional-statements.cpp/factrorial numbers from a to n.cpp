//print factrorial numbers from a to n

#include <iostream>
using namespace std;

// Function to calculate factorial of a number
long long factorial(int num) {
    long long fact = 1; // Use long long for large results
    for (int i = 2; i <= num; i++) {
        fact *= i; // Multiply fact by each number up to num
    }
    return fact;
}

int main() {
    int a, n;

    cout << "Enter the starting number (a): ";
    cin >> a;
    cout << "Enter the ending number (n): ";
    cin >> n;

    if (a > n) {
        cout << "Invalid input: starting number (a) should be less than or equal to ending number (n)." << endl;
        return 1; // Exit if input is invalid
    }

    // Loop from a to n to calculate and print factorials
    for (int i = a; i <= n; i++) {
        cout << "Factorial of " << i << " is: " << factorial(i) << endl;
    }

    return 0;
}
