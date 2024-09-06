// sum of all number from 1 to n which are divisible by 3

#include <iostream>
using namespace std;

int main() {
    int n, sum = 0;

    cout << "Enter a number (n): ";
    cin >> n;

    // Loop through numbers from 1 to n
    for (int i = 1; i <= n; i++) {
        if (i % 3 == 0) { // Check if divisible by 3
            sum += i; // Add to sum if divisible by 3
        }
    }

    cout << "Sum of all numbers from 1 to " << n << " that are divisible by 3 is: " << sum << endl;

    return 0;
}
