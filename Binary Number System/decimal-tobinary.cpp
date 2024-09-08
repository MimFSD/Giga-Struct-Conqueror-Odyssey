//  converting a decimal number to binary in C++ 

#include <iostream>
#include <string>

std::string decimalToBinary(int decimal) {
    std::string binary = ""; // Initialize an empty string for binary representation

    // Edge case for 0
    if (decimal == 0) {
        return "0";
    }

    // Convert decimal to binary
    while (decimal > 0) {
        binary = std::to_string(decimal % 2) + binary; // Append remainder to the front of the string
        decimal /= 2;  // Divide the number by 2
    }

    return binary;
}

int main() {
    int decimal;
    std::cout << "Enter a decimal number: ";
    std::cin >> decimal;

    std::string binary = decimalToBinary(decimal); // Get the binary representation
    std::cout << "Binary: " << binary << std::endl;

    return 0;
}
