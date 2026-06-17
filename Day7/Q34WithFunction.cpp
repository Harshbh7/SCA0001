// leetcode 34: Find First and Last Position of Element in Sorted Array with upper and lower bound functions
#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    // use upper and lower bound functions to find the first and last position of the target element in the sorted array
    int firstPosition(vector<int>& nums, int target) {
        auto it = lower_bound(nums.begin(), nums.end(), target);
        if (it != nums.end() && *it == target) {
            return it - nums.begin();
        }
        return -1;
    }

    int lastPosition(vector<int>& nums, int target) {
        auto it = upper_bound(nums.begin(), nums.end(), target);
        if (it != nums.begin() && *(--it) == target) {
            return it - nums.begin();
        }
        return -1;
    }
};

int main() {
    Solution sol;
    vector<int> nums = {5, 7, 7, 8, 8, 10};
    int target = 8;

    cout << "nums: ";
    for (int v : nums) cout << v << " ";
    cout << '\n';

    cout << "target: " << target << '\n';
    int firstIdx = sol.firstPosition(nums, target);
    int lastIdx = sol.lastPosition(nums, target);
    cout << "First position: " << firstIdx << "\n";
    cout << "Last position: " << lastIdx << "\n";
    return 0;
}