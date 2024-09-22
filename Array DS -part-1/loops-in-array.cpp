// C++ program to demonstrate how we can loop over an array
#include <iostream>
using namespace std;

int main()
{
    // Create and initialize an array
    int arr[] = { 1, 2, 3, 4, 5 };

    // calculate the size of an array
    int n = sizeof(arr) / sizeof(arr[0]);

    cout << "Elements in an Array: ";

    // Loop over an array and print each element
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}
