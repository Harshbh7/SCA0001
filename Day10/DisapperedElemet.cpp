#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

vector<int> findDisappearedNumbers(vector<int>& nums) {
    for (int i = 0; i < nums.size(); i++) {
        int index = abs(nums[i]) - 1;

        if (nums[index] > 0) {
            nums[index] = -nums[index];
        }
    }

    vector<int> ans;

    for (int i = 0; i < nums.size(); i++) {
        if (nums[i] > 0) {
            ans.push_back(i + 1);
        }
    }

    return ans;
}

int main() {
    vector<int> nums = {4, 3, 2, 7, 8, 2, 3, 1};

    vector<int> result = findDisappearedNumbers(nums);

    cout << "Missing Numbers: ";
    for (int num : result) {
        cout << num << " ";
    }

    cout << endl;
    return 0;
};
