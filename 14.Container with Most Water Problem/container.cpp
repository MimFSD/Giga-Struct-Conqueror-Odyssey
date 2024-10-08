//Brute & Optimal Solution 

#include <iostream>
#include <vector>
#include <algorithm> 

using namespace std;

int maxArea(vector<int>& height) {
    int left = 0;  
    int right = height.size() - 1; 
    int max_area = 0;

    while (left < right) {
        int current_area = min(height[left], height[right]) * (right - left);
        
        max_area = max(max_area, current_area);

        if (height[left] < height[right]) {
            left++;
        } else {
            right--;
        }
    }

    return max_area;
}

int main() {
    vector<int> height = {1, 8, 6, 2, 5, 4, 8, 3, 7};
    cout << "The maximum area of water the container can store is: " << maxArea(height) << endl;

    return 0;
}
