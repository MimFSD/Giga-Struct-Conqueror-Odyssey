#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the size of the square: ";
    cin >> n;

    // Outer loop for each row
    for (int i = 0; i < n; i++) {
        // Inner loop for each column
        for (int j = 0; j < n; j++) {
            cout << "* "; // Print an asterisk
        }
        cout << endl; 
    }

    return 0;
}
