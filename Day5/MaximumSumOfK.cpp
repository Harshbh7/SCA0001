// leetcode question 2461 Maximum Sum of Distinct Subarrays With Length K
// input nums=[4,4,4], k=3 output=0
// time limit 1000ms, memory limit 256mb
#include <iostream>
#include <vector>
#include <unordered_set>
using namespace std;

class Solution {
public:    
    long long maximumSubarraySum(vector<int>& nums, int k) {
        unordered_set<int> seen;
        long long sum = 0;
        long long maxSum = 0;
        for (int i = 0; i < nums.size(); i++) {
            if (i >= k) {
                seen.erase(nums[i - k]);
                sum -= nums[i - k];
            }
            if (seen.count(nums[i]) == 0) {
                seen.insert(nums[i]);
                sum += nums[i];
                maxSum = max(maxSum, sum);
            } else {
                while (seen.count(nums[i]) > 0) {
                    seen.erase(nums[i - k]);
                    sum -= nums[i - k];
                }
                seen.insert(nums[i]);
                sum += nums[i];
                maxSum = max(maxSum, sum);
            }
        }
        return maxSum;
    }
};