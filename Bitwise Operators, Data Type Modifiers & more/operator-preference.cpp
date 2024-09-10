#include <iostream>
using namespace std;

int main() {
    int a = 5, b = 10, c = 15;
    
    int result1 = a + b * c;
    cout << "Result of a + b * c: " << result1 << endl;


    int result2 = (a + b) * c;
    cout << "Result of (a + b) * c: " << result2 << endl;

    int result3 = a << 1;
    cout << "Result of a << 1: " << result3 << endl;

    int result4 = b >> 2;
    cout << "Result of b >> 2: " << result4 << endl;

    bool result5 = (a > b) && (b < c);
    cout << "Result of (a > b) && (b < c): " << result5 << endl;

    bool result6 = (a < b) || (c < b);
    cout << "Result of (a < b) || (c < b): " << result6 << endl;

    int result7 = (a > b) ? a : b;
    cout << "Result of (a > b) ? a : b: " << result7 << endl;

    return 0;
}
