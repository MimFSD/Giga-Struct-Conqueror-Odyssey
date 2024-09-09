#include <iostream>
using namespace std;

int main() {
    int n;

    // Asking the user for the number of rows in the triangle
    cout << "Enter the number of rows: ";
    cin >> n;

    // Outer loop for each row
    for (int i = n; i >= 1; i--) {
        // Inner loop for each column
        for (int j = 1; j <= i; j++) {
            cout << "* "; // Print an asterisk
        }
        cout << endl; // Move to the next line after each row
    }

    return 0;
}
