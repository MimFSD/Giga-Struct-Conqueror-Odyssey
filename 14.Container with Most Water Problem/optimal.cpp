#include <iostream>
#include <vector>
#include <algorithm>  

using namespace std;

int maxArea(vector<int>& height) {
    int left = 0;             
    int right = height.size() - 1; 
    int max_area = 0;            
    
    while (left < right) {
        int width = right - left;
        int current_area = min(height[left], height[right]) * width;
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
