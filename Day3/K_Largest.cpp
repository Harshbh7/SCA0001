#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    Solution sol;
    vector<int> nums = {3, 2, 1, 5, 6, 4};
    int k = 2;
    cout << "Input: "; for (int v : nums) cout << v << " "; cout << '\n';
    cout << "K-th largest: " << sol.findKthLargest(nums, k) << '\n';
    return 0;
}