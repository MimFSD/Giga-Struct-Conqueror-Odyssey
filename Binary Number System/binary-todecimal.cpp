///binary to decimal -- code

#include <iostream>
#include <string>
#include <cmath> // Include cmath for the pow function

int binaryToDecimal(const std::string& binary) {
    int decimal = 0;
    int length = binary.length();

    // Iterate over each digit in the binary string
    for (int i = 0; i < length; ++i) {
        if (binary[i] == '1') {
            // Calculate the power of 2 for the current position
            decimal += pow(2, length - i - 1);
        }
    }

    return decimal;
}

int main() {
    std::string binary;
    std::cout << "Enter a binary number: ";
    std::cin >> binary;

    int decimal = binaryToDecimal(binary); // Convert binary to decimal
    std::cout << "Decimal: " << decimal << std::endl;

    return 0;
}

