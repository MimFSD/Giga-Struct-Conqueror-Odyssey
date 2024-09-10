#include <iostream>
using namespace std;

void function() {
    int localVar = 10;  // Local variable
    cout << "Local variable inside function: " << localVar << endl;
}

int main() {
    function();
    // cout << localVar;  // Error: localVar is not accessible here
    return 0;
}
