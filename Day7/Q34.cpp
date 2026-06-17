// leetcode 34: Find First and Last Position of Element in Sorted Array
#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:

    int firstPosition(vector<int>& nums, int target) {

        int low = 0;
        int high = nums.size() - 1;

        int ans = -1;

        while(low <= high) {

            int mid = low + (high - low) / 2;

            if(nums[mid] == target) {
                ans = mid;
                high = mid - 1;
            }

            else if(nums[mid] < target) {
                low = mid + 1;
            }

            else {
                high = mid - 1;
            }
        }

        return ans;
    }

    int lastPosition(vector<int>& nums, int target) {

        int low = 0;
        int high = nums.size() - 1;

        int ans = -1;

        while(low <= high) {

            int mid = low + (high - low) / 2;

            if(nums[mid] == target) {
                ans = mid;
                low = mid + 1;
            }

            else if(nums[mid] < target) {
                low = mid + 1;
            }

            else {
                high = mid - 1;
            }
        }

        return ans;
    }

    vector<int> searchRange(vector<int>& nums, int target) {
        
        int first = firstPosition(nums, target);
        int last = lastPosition(nums, target);

        return {first, last};
    }
};

int main() {
    Solution sol;
    vector<int> nums = {5, 7, 7, 8, 8, 10};
    int target = 8;

    cout << "Input: ";
    for (int v : nums) cout << v << " ";
    cout << '\n';

    vector<int> result = sol.searchRange(nums, target);
    cout << "Output: [" << result[0] << ", " << result[1] << "]\n";
    return 0;
}