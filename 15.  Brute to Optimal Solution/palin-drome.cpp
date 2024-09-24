#include <iostream>
using namespace std;

bool isPalindrome(int arr[], int n) {
    int left = 0, right = n - 1;
    while (left < right) {
        if (arr[left] != arr[right]) {
            return false;
        }
        ++left;
        --right;
    }
    return true;
}

int main() {
    int arr[] = {1, 2, 3, 2, 1};
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << (isPalindrome(arr, n) ? "Palindrome" : "Not a Palindrome");
    return 0;
}
