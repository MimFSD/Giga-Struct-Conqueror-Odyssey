#include <iostream>
#include <vector>
#include <algorithm>  

using namespace std;

int main() {
    vector<int> vec = {5, 1, 9, 3, 7};

    // Sorting - O(n log n)
    sort(vec.begin(), vec.end());

    // Binary search - O(log n)
    bool found = binary_search(vec.begin(), vec.end(), 3);

  
    cout << "Found 3: " << boolalpha << found << endl;

    return 0;
}
