//Brute & Optimal Solution 

#include <iostream>
#include <vector>
#include <algorithm> 

using namespace std;

int maxArea(vector<int>& height) {
    int left = 0;  // Start pointer at the beginning
    int right = height.size() - 1;  // End pointer at the last element
    int max_area = 0;

    // Loop until the two pointers meet
    while (left < right) {
        // Calculate the current area
        int current_area = min(height[left], height[right]) * (right - left);
        
        // Update the maximum area found
        max_area = max(max_area, current_area);

        // Move the pointer with the shorter height
        if (height[left] < height[right]) {
            left++;
        } else {
            right--;
        }
    }

    return max_area;
}

int main() {
    // Example usage
    vector<int> height = {1, 8, 6, 2, 5, 4, 8, 3, 7};
    cout << "The maximum area of water the container can store is: " << maxArea(height) << endl;

    return 0;
}
