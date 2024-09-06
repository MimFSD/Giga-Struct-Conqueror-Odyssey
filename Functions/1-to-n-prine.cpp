// WAF all prime numbers from 1 to N 
#include <iostream>
#include <cmath>
using namespace std;

bool isPrime(int num) {
    if (num <= 1) return false;
    for (int i = 2; i <= sqrt(num); ++i) {
        if (num % i == 0) return false;
    }
    return true;
}

void printAllPrimes(int N) {
    for (int num = 2; num <= N; ++num) {
        if (isPrime(num)) cout << num << " ";
    }
    cout << endl;
}

int main() {
    int N;
    cin >> N;
    printAllPrimes(N);
    return 0;
}
