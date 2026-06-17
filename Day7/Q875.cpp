// LeetCode 875. Koko Eating Bananas

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    bool canEatAll(vector<int>& piles, int h, int speed) {
        long long hours = 0;

        for (int bananas : piles) {
            hours += (bananas + speed - 1) / speed; 
        }

        return hours <= h;
    }

    int minEatingSpeed(vector<int>& piles, int h) {
        int low = 1;
        int high = *max_element(piles.begin(), piles.end());

        while (low < high) {
            int mid = low + (high - low) / 2;

            if (canEatAll(piles, h, mid)) {
                high = mid;   
            } else {
                low = mid + 1; 
            }
        }

        return low;
    }
};

int main() {
    Solution sol;

    vector<int> piles = {30, 11,2,3,4,20};
    int h = 5;

    cout << "Minimum Eating Speed: "
         << sol.minEatingSpeed(piles, h) << endl;

    return 0;
}