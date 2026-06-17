// leetcode question 2537 : Count The Number Of Good Subarrays. input: nums = [1,1, 1, 1, 1], k = 10. output: 1
#include <iostream>
#include <vector>
using namespace std;

class Solution {
    public:
    long long countGood(vector<int>& nums, int k) {
        long long ans = 0;
        int n = nums.size();
        for (int i = 0; i < n; i++) {
            int count = 0;
            for (int j = i; j < n; j++) {
                if (nums[j] == 1) {
                    count++;
                }
                if (count >= k) {
                    ans++;
                }
            }
        }
        return ans;     
    }
};