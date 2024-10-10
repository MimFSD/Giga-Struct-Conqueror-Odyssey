#include <iostream>
#include <fstream>  
#include <thread>  
#include <vector>   
#include <chrono>   
using namespace std;
using namespace std::chrono;

template <typename T>
void bubbleSort(vector<T>& arr, bool ascending) {
    int n = arr.size();
    for (int i = 0; i < n - 1; i++) {
        bool swapped = false;
        for (int j = 0; j < n - i - 1; j++) {
            if (ascending ? (arr[j] > arr[j + 1]) : (arr[j] < arr[j + 1])) {
                swap(arr[j], arr[j + 1]);
                swapped = true;
            }
        }
        if (!swapped)
            break;
    }
}

template <typename T>
void printArray(const vector<T>& arr) {
    for (const auto& elem : arr) {
        cout << elem << " ";
    }
    cout << endl;
}

template <typename T>
void sortThreaded(vector<T>& arr, bool ascending) {
    bubbleSort(arr, ascending);
}

template <typename T>
void readFromFile(vector<T>& arr, const string& filename) {
    ifstream file(filename);
    if (!file) {
        throw runtime_error("Unable to open file for reading.");
    }
    T value;
    while (file >> value) {
        arr.push_back(value);
    }
    file.close();
}

template <typename T>
void writeToFile(const vector<T>& arr, const string& filename) {
    ofstream file(filename);
    if (!file) {
        throw runtime_error("Unable to open file for writing.");
    }
    for (const auto& elem : arr) {
        file << elem << " ";
    }
    file.close();
}

int main() {
    int choice, dataType;
    bool ascending = true;
    string inputFile, outputFile;
    
    cout << "Choose input method:\n1. Console Input\n2. File Input\n";
    cin >> choice;

    cout << "Choose data type:\n1. Integer\n2. Float\n3. String\n";
    cin >> dataType;

    cout << "Choose sorting order:\n1. Ascending\n2. Descending\n";
    int orderChoice;
    cin >> orderChoice;
    ascending = (orderChoice == 1);

    if (choice == 1) {
        if (dataType == 1) {
            vector<int> arr;
            int n, val;
            cout << "Enter number of elements: ";
            cin >> n;
            cout << "Enter elements: ";
            for (int i = 0; i < n; ++i) {
                cin >> val;
                arr.push_back(val);
            }

            thread t(sortThreaded<int>, ref(arr), ascending);
            t.join();

            cout << "Sorted array: ";
            printArray(arr);
        } else if (dataType == 2) {
            vector<float> arr;
            int n;
            float val;
            cout << "Enter number of elements: ";
            cin >> n;
            cout << "Enter elements: ";
            for (int i = 0; i < n; ++i) {
                cin >> val;
                arr.push_back(val);
            }

            thread t(sortThreaded<float>, ref(arr), ascending);
            t.join();

            cout << "Sorted array: ";
            printArray(arr);
        } else if (dataType == 3) {
            vector<string> arr;
            int n;
            string val;
            cout << "Enter number of elements: ";
            cin >> n;
            cout << "Enter elements: ";
            for (int i = 0; i < n; ++i) {
                cin >> val;
                arr.push_back(val);
            }

            thread t(sortThreaded<string>, ref(arr), ascending);
            t.join();

            cout << "Sorted array: ";
            printArray(arr);
        }
    } else if (choice == 2) {
        // File Input
        cout << "Enter input file name: ";
        cin >> inputFile;
        cout << "Enter output file name: ";
        cin >> outputFile;

        if (dataType == 1) {
            vector<int> arr;
            try {
                readFromFile(arr, inputFile);
            } catch (const runtime_error& e) {
                cerr << e.what() << endl;
                return -1;
            }

            thread t(sortThreaded<int>, ref(arr), ascending);
            t.join();

            try {
                writeToFile(arr, outputFile);
            } catch (const runtime_error& e) {
                cerr << e.what() << endl;
                return -1;
            }
            cout << "Sorted data written to " << outputFile << endl;
        } else if (dataType == 2) {
            vector<float> arr;
            try {
                readFromFile(arr, inputFile);
            } catch (const runtime_error& e) {
                cerr << e.what() << endl;
                return -1;
            }

            thread t(sortThreaded<float>, ref(arr), ascending);
            t.join();

            try {
                writeToFile(arr, outputFile);
            } catch (const runtime_error& e) {
                cerr << e.what() << endl;
                return -1;
            }
            cout << "Sorted data written to " << outputFile << endl;
        } else if (dataType == 3) {
            vector<string> arr;
            try {
                readFromFile(arr, inputFile);
            } catch (const runtime_error& e) {
                cerr << e.what() << endl;
                return -1;
            }

            thread t(sortThreaded<string>, ref(arr), ascending);
            t.join();

            try {
                writeToFile(arr, outputFile);
            } catch (const runtime_error& e) {
                cerr << e.what() << endl;
                return -1;
            }
            cout << "Sorted data written to " << outputFile << endl;
        }
    }

    return 0;
}
