#include <iostream>
using namespace std;  // This line allows you to use names from the standard library without the 'std::' prefix

// Function that takes two integers by reference
void swap(int &x, int &y) {
    int temp = x;
    x = y;
    y = temp;
}

int main() {
    int a = 5, b = 10;

    cout << "Before swap: a = " << a << ", b = " << b << endl;

    // Call the swap function
    swap(a, b);

    cout << "After swap: a = " << a << ", b = " << b << endl;

    return 0;
}
