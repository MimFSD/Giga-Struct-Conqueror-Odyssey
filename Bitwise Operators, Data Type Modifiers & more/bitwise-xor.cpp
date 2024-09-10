#include <iostream>
using namespace std;

int main() {
    int a = 5;  // Binary: 0101
    int b = 3;  // Binary: 0011

    int result = a ^ b;  // Performs bitwise XOR: 0101 ^ 0011 = 0110

    cout << "Result of a ^ b: " << result << endl;  // Output will be 6
    return 0;
}
