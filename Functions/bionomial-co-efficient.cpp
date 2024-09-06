#include <iostream>
using namespace std;

long long nCr(int n, int r) {
    // nCr is not defined if r > n
    if (r > n) return 0;
    
    // Since nCr(n, r) = nCr(n, n-r), use the smaller r for efficiency
    if (r > n - r) r = n - r;
    
    long long result = 1;
    
    // Calculate nCr using iterative approach
    for (int i = 0; i < r; ++i) {
        result *= (n - i);
        result /= (i + 1);
    }

    return result;
}

int main() {
    int n, r;
    
    cout << "Enter values for n and r: ";
    cin >> n >> r;

    cout << "nCr (" << n << " choose " << r << ") is: " << nCr(n, r) << endl;
    
    return 0;
}
