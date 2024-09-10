#include <iostream>
using namespace std;

int reverseInteger(int n) {
    int reversed = 0;
    while (n != 0) {
        int digit = n % 10; // Get the last digit of n
        if (reversed > INT_MAX / 10 || reversed < INT_MIN / 10) {
            // If reversing causes overflow, return 0
            return 0;
        }
        reversed = reversed * 10 + digit; // Append the digit to reversed
        n /= 10; // Remove the last digit from n
    }
    return reversed;
}

int main() {
    int num;
    cout << "Enter an integer: ";
    cin >> num;

    int reversedNum = reverseInteger(num);

    cout << "Reversed integer: " << reversedNum << endl;

    return 0;
}
