// leetcode question 2537 : Count The Number Of Good Subarrays
#include <iostream>
#include <vector>
using namespace std;

class Solution{
    public:
     long long countGoood(vector<int>& nums, int k) {
        long long count = 0;
        int left = 0, right = 0;
        long long sum = 0;
        while (right < nums.size()) {
            sum += nums [right];
            right++;
            while (sum >= k) {
                count += nums.size() -right + 1;
                sum -= nums[left];
                left++;

            }
        }
        return count;
     }
};