#include <iostream>
using namespace std;
int main() {
    int num = 10;
    int *ptr = &num; 
    int **ptr2 = &ptr; 

    std::cout << "Value of num: " << num << std::endl;
    std::cout << "Address of num (stored in ptr): " << ptr << std::endl;
    std::cout << "Address of ptr (stored in ptr2): " << ptr2 << std::endl;

    std::cout << "Dereferencing ptr (value of num): " << *ptr << std::endl;
    std::cout << "Dereferencing ptr2 (value of ptr): " << *ptr2 << std::endl;
    std::cout << "Double dereferencing ptr2 (value of num): " << **ptr2 << std::endl;

    return 0;
}
