// #include<iostream>
// using  namespace  std ;

// int main (){
//     return 0 ;
// }

#include <iostream>
using namespace std;

int main() {
    int n;

    // Asking the user for the number of rows in the top half of the diamond
    cout << "Enter the number of rows for the upper half: ";
    cin >> n;

    // Upper half of the diamond
    for (int i = 1; i <= n; i++) {
        // Print leading spaces
        for (int j = 1; j <= n - i; j++) {
            cout << " ";
        }
        // Print star and inner spaces
        for (int k = 1; k <= 2 * i - 1; k++) {
            if (k == 1 || k == 2 * i - 1) {
                cout << "*"; // Print star at the beginning and end of each row
            } else {
                cout << " "; // Print space inside the hollow part
            }
        }
        cout << endl; // Move to the next line after each row
    }

    // Lower half of the diamond
    for (int i = n - 1; i >= 1; i--) {
        // Print leading spaces
        for (int j = 1; j <= n - i; j++) {
            cout << " ";
        }
        // Print star and inner spaces
        for (int k = 1; k <= 2 * i - 1; k++) {
            if (k == 1 || k == 2 * i - 1) {
                cout << "*"; // Print star at the beginning and end of each row
            } else {
                cout << " "; // Print space inside the hollow part
            }
        }
        cout << endl; 
    }

    return 0;
}
