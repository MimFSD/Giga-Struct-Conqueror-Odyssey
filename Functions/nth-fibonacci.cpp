#include <iostream>
using namespace std;

void printFibonacci(int N) {
    int a = 0, b = 1, next;

    for (int i = 0; i < N; ++i) {
        if (i == 0) {
            cout << a << " ";
        } else if (i == 1) {
            cout << b << " ";
        } else {
            next = a + b;
            cout << next << " ";
            a = b;
            b = next;
        }
    }
    cout << endl;
}

int main() {
    int N;
    cin >> N;
    printFibonacci(N);
    return 0;
}
