#include <iostream>
#include <vector>
#include <algorithm>  

using namespace std;

int maxAreaBruteForce(vector<int>& height) {
    int n = height.size();
    int max_area = 0;

    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            int current_area = min(height[i], height[j]) * (j - i);
            
            max_area = max(max_area, current_area);
        }
    }

    return max_area;
}

int main() {
    vector<int> height = {1, 8, 6, 2, 3, 4, 8, 9, 7};
    cout << "The maximum area of water the container can store (Brute Force) is: " << maxAreaBruteForce(height) << endl;

    return 0;
}
