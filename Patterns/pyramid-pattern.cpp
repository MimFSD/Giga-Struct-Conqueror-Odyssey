#include <iostream>
using namespace std;

int main() {
    int n;

    // Asking the user for the number of rows in the pyramid
    cout << "Enter the number of rows: ";
    cin >> n;

    // Outer loop for each row
    for (int i = 1; i <= n; i++) {
        // Loop to print spaces before the asterisks
        for (int j = 1; j <= n - i; j++) {
            cout << " "; // Print spaces to center the pyramid
        }
        // Loop to print asterisks
        for (int k = 1; k <= 2 * i - 1; k++) {
            cout << "*"; // Print asterisks
        }
        cout << endl; // Move to the next line after each row
    }

    return 0;
}
