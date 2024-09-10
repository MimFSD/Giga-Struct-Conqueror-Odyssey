#include <iostream>
using namespace std;

int main() {
    // Signed integers (default)
    signed int a = -100;
    cout << "Signed int a: " << a << endl;

    // Unsigned integers
    unsigned int b = 100;
    cout << "Unsigned int b: " << b << endl;

    // Short integers
    short int c = 32767;
    cout << "Short int c: " << c << endl;

    // Unsigned short integers
    unsigned short int d = 65535;
    cout << "Unsigned short int d: " << d << endl;

    // Long integers
    long int e = 2147483647;
    cout << "Long int e: " << e << endl;

    // Long long integers
    long long int f = 9223372036854775807;
    cout << "Long long int f: " << f << endl;

    // Unsigned long long integers
    unsigned long long int g = 18446744073709551615U;
    cout << "Unsigned long long int g: " << g << endl;

    // Signed and unsigned characters
    signed char h = -128;
    unsigned char i = 255;
    cout << "Signed char h: " << (int)h << endl;
    cout << "Unsigned char i: " << (int)i << endl;

    return 0;
}
