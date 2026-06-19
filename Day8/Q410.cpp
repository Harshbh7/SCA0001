#include <iostream>
#include <vector>
#include <numeric>
using namespace std;

bool canSplit(vector<int>& nums, int k, int maxSum) {
    int count = 1;
    int currSum = 0;

    for (int num : nums) {
        if (currSum + num <= maxSum) {
            currSum += num;
        } else {
            count++;
            currSum = num;

            if (count > k)
                return false;
        }
    }

    return true;
}

int splitArray(vector<int>& nums, int k) {
    int low = *max_element(nums.begin(), nums.end());
    int high = accumulate(nums.begin(), nums.end(), 0);

    while (low < high) {
        int mid = low + (high - low) / 2;

        if (canSplit(nums, k, mid)) {
            high = mid;
        } else {
            low = mid + 1;
        }
    }

    return low;
}

int main() {
    vector<int> nums = {7, 2, 5, 10, 8};
    int k = 2;

    cout << "Answer: " << splitArray(nums, k) << endl;

    return 0;
}