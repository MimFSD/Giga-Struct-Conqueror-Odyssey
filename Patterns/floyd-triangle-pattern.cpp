#include <iostream>
using namespace std;

int main() {
    int n, num = 1;

    cout << "Enter the number of rows: ";
    cin >> n;
    for (int i = 1; i <= n; i++) {
        // Inner loop for each column
        for (int j = 1; j <= i; j++) {
            cout << num << " "; // Print the current number
            num++; // Increment the number for the next position
        }
        cout << endl; 

    return 0;
}
