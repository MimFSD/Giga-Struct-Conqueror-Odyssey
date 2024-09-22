#include <iostream>
using namespace std;

int main() {
    int n;

    cout << "Enter the number of rows: ";
    cin >> n;

    // Outer loop for each row
    for (int i = 1; i <= n; i++) {
        // Inner loop for each column
        for (int j = 1; j <= i; j++) {
            cout << j << " "; 
        }
        cout << endl; 
    }

    return 0;
}
