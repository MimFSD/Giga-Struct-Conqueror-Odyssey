#include <iostream>

void modifyValue(int *ptr) {
    *ptr = 50;  
}

int main() {
    int num = 25;
    std::cout << "Original value: " << num << std::endl;

    modifyValue(&num);  
    std::cout << "Modified value: " << num << std::endl; 

    return 0;
}
