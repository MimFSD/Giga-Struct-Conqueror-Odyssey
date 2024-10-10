#include <iostream>
#include <chrono>  
using namespace std;
using namespace std::chrono;

void bubbleSort(int arr[], int n, bool ascending) {
    for (int i = 0; i < n - 1; i++) {
        bool swapped = false;
        for (int j = 0; j < n - i - 1; j++) {
            if (ascending ? (arr[j] > arr[j + 1]) : (arr[j] < arr[j + 1])) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
                swapped = true;
            }
        }
       
        if (!swapped)
            break;
    }
}

void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++)
        cout << arr[i] << " ";
    cout << endl;
}

int main() {
    int n;
    
    do {
        cout << "Enter the number of elements (positive integer): ";
        cin >> n;
        if (n <= 0) {
            cout << "Invalid input. Please enter a positive integer." << endl;
        }
    } while (n <= 0);

    int* arr = new int[n];

    cout << "Enter " << n << " elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i]; 
    }

    int choice;
    bool ascending = true;

    do {
        cout << "Choose sorting order: \n1. Ascending \n2. Descending\n";
        cin >> choice;
        if (choice == 1) {
            ascending = true;
        } else if (choice == 2) {
            ascending = false;
        } else {
            cout << "Invalid choice. Please select 1 for Ascending or 2 for Descending.\n";
        }
    } while (choice != 1 && choice != 2);

    cout << "Original array: ";
    printArray(arr, n);

    auto start = high_resolution_clock::now();
    
    bubbleSort(arr, n, ascending);

    auto stop = high_resolution_clock::now();
    auto duration = duration_cast<microseconds>(stop - start);

    cout << "Sorted array: ";
    printArray(arr, n);

    cout << "Time taken for sorting: " << duration.count() << " microseconds" << endl;

    delete[] arr;

    return 0;
}
