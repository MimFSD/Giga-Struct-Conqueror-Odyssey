#include <iostream>
#include <vector>
#include <algorithm>  // for min and max

using namespace std;

int maxArea(vector<int>& height) {
    int left = 0;                // Pointer at the start of the array
    int right = height.size() - 1; // Pointer at the end of the array
    int max_area = 0;            // Variable to store the maximum area
    
    // Loop until the two pointers meet
    while (left < right) {
        // Calculate the width between the two pointers
        int width = right - left;
        // Calculate the current area using the shorter line
        int current_area = min(height[left], height[right]) * width;
        // Update the maximum area if the current area is larger
        max_area = max(max_area, current_area);
        
        // Move the pointer that points to the shorter line
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
    
    cout << "Maximum area: " << maxArea(height) << endl;
    
    return 0;
}
