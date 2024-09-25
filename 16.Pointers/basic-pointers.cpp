#include <iostream>

void display(int val) {
    std::cout << "Function pointer value: " << val << std::endl;
}

int main() {
    // 1. Null Pointer
    int *nullPtr = nullptr;
    if (!nullPtr) {
        std::cout << "This is a null pointer.\n";
    }

    // 2. Void Pointer
    int num = 42;
    void *voidPtr = &num;  // Generic pointer that can point to any type
    std::cout << "Void pointer points to num: " << *(static_cast<int*>(voidPtr)) << std::endl;  // Type casting required

    // 3. Pointer to Pointer
    int *ptr1 = &num;
    int **ptr2 = &ptr1;  // Pointer to pointer
    std::cout << "Pointer to pointer value: " << **ptr2 << std::endl;

    // 4. Function Pointer
    void (*funcPtr)(int) = &display;
    funcPtr(100);  // Calling function via pointer

    // 5. Array Pointer
    int arr[3] = {10, 20, 30};
    int *arrPtr = arr;  // Points to first element of array
    std::cout << "Array pointer first value: " << *arrPtr << std::endl;
    std::cout << "Array pointer second value: " << *(arrPtr + 1) << std::endl;  // Pointer arithmetic

    // 6. Constant Pointer (pointer itself is constant)
    int a = 10, b = 20;
    int *const constPtr = &a;  // constPtr cannot point to another address after initialization
    std::cout << "Constant pointer points to: " << *constPtr << std::endl;
    *constPtr = 30;  // Can change value
    std::cout << "Modified value: " << *constPtr << std::endl;

    // 7. Pointer to Constant (cannot modify the value pointed to)
    const int *ptrToConst = &b;  // Value pointed to by ptrToConst is constant
    std::cout << "Pointer to constant value: " << *ptrToConst << std::endl;
    // *ptrToConst = 40;  // Error: Cannot change value of const int

    return 0;
}
