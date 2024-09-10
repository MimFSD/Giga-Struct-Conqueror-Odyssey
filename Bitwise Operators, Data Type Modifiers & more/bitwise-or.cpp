#include <iostream>
using namespace std;

int main() {
    int a = 5;  // Binary: 0101
    int b = 3;  // Binary: 0011

    int result = a | b;  // Performs bitwise OR: 0101 | 0011 = 0111

    cout << "Result of a | b: " << result << endl;  // Output will be 7
    return 0;
}
