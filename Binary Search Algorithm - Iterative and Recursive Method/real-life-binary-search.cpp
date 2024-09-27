#include <iostream>
#include <string>
using namespace std;

// Function for binary search on a sorted list of book titles
int binarySearch(string books[], int size, string target) {
    int left = 0;
    int right = size - 1;

    while (left <= right) {
        int mid = left + (right - left) / 2; // Avoid overflow

        // Compare the middle book with the target
        if (books[mid] == target)
            return mid;

        // If the target comes after the middle book
        if (books[mid] < target)
            left = mid + 1;
        // If the target comes before the middle book
        else
            right = mid - 1;
    }

    // Target book is not in the list
    return -1;
}

int main() {
    // Sorted list of book titles
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

    // The book we are looking for
    string target = "Moby Dick";

    int result = binarySearch(books, size, target);
    if (result != -1)
        cout << "Book found at index " << result << endl;
    else
        cout << "Book not found in the catalog" << endl;

    return 0;
}
