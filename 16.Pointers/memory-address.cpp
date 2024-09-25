#include <iostream>
using namespace std ;
int main() {
    int a = 42;
    int *ptr = &a;

    std::cout << "Value of a: " << a << std::endl;
    std::cout << "Address of a: " << &a << std::endl;
    std::cout << "Pointer ptr points to: " << ptr << std::endl;
    std::cout << "Value at address ptr: " << *ptr << std::endl;

    return 0;
}
