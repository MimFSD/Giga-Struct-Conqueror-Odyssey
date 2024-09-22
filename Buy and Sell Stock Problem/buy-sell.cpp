#include <iostream>
#include <vector>
#include <algorithm> 
using namespace std;

int maxProfit(vector<int>& prices) {
  
    if (prices.empty()) return 0;

    int min_price = prices[0];  
    int max_profit = 0;          

    // Traverse the price array
    for (int i = 1; i < prices.size(); ++i) {
        // Update min_price if the current price is lower than the min_price so far
        min_price = min(min_price, prices[i]);

        // Calculate the current potential profit
        int current_profit = prices[i] - min_price;

        // Update max_profit if the current profit is greater than the previous max_profit
        max_profit = max(max_profit, current_profit);
    }

    return max_profit;  // Return the maximum profit found
}

int main() {
    // Example input: prices of stocks on different days
    vector<int> prices = {7, 1, 5, 3, 6, 4};

    // Call the function to find the maximum profit
    int profit = maxProfit(prices);

    cout << "Maximum profit: " << profit << endl;

    return 0;
}
