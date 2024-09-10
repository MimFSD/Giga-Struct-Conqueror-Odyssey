#include <iostream>
using namespace std;

int main() {
    int a = 5;   // Binary: 00000000 00000000 00000000 00000101

    int result = a << 1;  // Left shift by 1 position: 00000000 00000000 00000000 00001010

    cout << "Result of a << 1: " << result << endl;  // Output will be 10
    return 0;
}
