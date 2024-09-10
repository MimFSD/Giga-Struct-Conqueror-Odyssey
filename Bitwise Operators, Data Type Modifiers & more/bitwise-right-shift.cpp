#include <iostream>
using namespace std;

int main() {
    int a = 20;  // Binary: 00000000 00000000 00000000 00010100

    int result = a >> 2;  // Right shift by 2 positions: 00000000 00000000 00000000 00000101

    cout << "Result of a >> 2: " << result << endl;  // Output will be 5
    return 0;
}
