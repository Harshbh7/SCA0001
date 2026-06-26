#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution{
    public:
        int maxProfit(vector<int>& prices){
            int low = prices[0];
            int profit = 0;

            for (int i = 1; i<prices.size(); i++){
                low = min(low, prices[i]);
                profit = max(profit, prices[i] - low);
            }
            return profit;
        }
};

int main() {
    Solution obj;
    vector<int> prices = {7, 1, 5, 3, 6, 4};
    
    cout << "Prices: ";
    for (int p : prices) cout << p << " ";
    cout << "\n";
    
    int profit = obj.maxProfit(prices);
    cout << "Max Profit: " << profit << "\n";
    
    return 0;
}