#include <iostream>
#include <vector>
#include <algorithm> 
using namespace std;

int maxProfit(vector<int>& prices) {
  
    if (prices.empty()) return 0;

    int min_price = prices[0];  
    int max_profit = 0;          

    for (int i = 1; i < prices.size(); ++i) {
        min_price = min(min_price, prices[i]);

        int current_profit = prices[i] - min_price;
        max_profit = max(max_profit, current_profit);
    }

    return max_profit; 
}

int main() {
    // Example input: prices of stocks on different days
    vector<int> prices = {7, 1, 5, 3, 6, 4};

    // Call the function to find the maximum profit
    int profit = maxProfit(prices);

    cout << "Maximum profit: " << profit << endl;

    return 0;
}
