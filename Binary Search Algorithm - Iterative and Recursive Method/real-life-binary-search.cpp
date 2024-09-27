#include <iostream>
#include <string>
using namespace std;

int binarySearch(string books[], int size, string target) {
    int left = 0;
    int right = size - 1;

    while (left <= right) {
        int mid = left + (right - left) / 2; 

        if (books[mid] == target)
            return mid;

        
        if (books[mid] < target)
            left = mid + 1;
    
        else
            right = mid - 1;
    }

    return -1;
}

int main() {
    string books[] = {
        "A Tale of Two Cities",
        "Brave New World",
        "Catch-22",
        "Don Quixote",
        "Frankenstein",
        "Moby Dick",
        "Pride and Prejudice",
        "The Great Gatsby",
        "The Odyssey",
        "War and Peace"
    };
    int size = sizeof(books) / sizeof(books[0]);

    string target = "Moby Dick";

    int result = binarySearch(books, size, target);
    if (result != -1)
        cout << "Book found at index " << result << endl;
    else
        cout << "Book not found in the catalog" << endl;

    return 0;
}
