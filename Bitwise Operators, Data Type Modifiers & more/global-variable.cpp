#include <iostream>
using namespace std;

int globalVar = 20;  // Global variable

void function() {
    cout << "Global variable inside function: " << globalVar << endl;
}

int main() {
    cout << "Global variable inside main: " << globalVar << endl;
    function();
    return 0;
}
