#include <iostream>
using namespace std;

int main() {
    int n, num = 1;

    // Asking the user for the number of rows in the Floyd's Triangle
    cout << "Enter the number of rows: ";
    cin >> n;

    // Outer loop for each row
    for (int i = 1; i <= n; i++) {
        // Inner loop for each column
        for (int j = 1; j <= i; j++) {
            cout << num << " "; // Print the current number
            num++; // Increment the number for the next position
        }
        cout << endl; // Move to the next line after each row
    }

    return 0;
}
