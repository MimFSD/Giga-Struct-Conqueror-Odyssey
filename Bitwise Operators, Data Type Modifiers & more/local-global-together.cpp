#include <iostream>
using namespace std;

int globalVar = 50;  // Global variable

void function() {
    int localVar = 30;  // Local variable in function()
    cout << "Local variable inside function: " << localVar << endl;
    cout << "Global variable inside function: " << globalVar << endl;
}

int main() {
    int localVar = 10;  // Local variable in main()
    cout << "Local variable inside main: " << localVar << endl;
    cout << "Global variable inside main: " << globalVar << endl;
    function();  // Calling the function to demonstrate scope
    return 0;
}
