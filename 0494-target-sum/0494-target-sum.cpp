class Solution {
public:
    unordered_map<string, int> dp;

    int solve(vector<int>& nums, int index, int sum, int target) {
        if (index == nums.size())
            return sum == target;
        string key = to_string(index) + "," + to_string(sum);
        if (dp.count(key))
            return dp[key];
        int add = solve(nums, index + 1, sum + nums[index], target);
        int subtract = solve(nums, index + 1, sum - nums[index], target);
        return dp[key] = add + subtract;
    }

    int findTargetSumWays(vector<int>& nums, int target) {
        return solve(nums, 0, 0, target);
    }
};