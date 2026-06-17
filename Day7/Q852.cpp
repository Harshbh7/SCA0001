// leetcode 852: Peak Index in a Mountain Array
#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        int low = 0;
        int high = arr.size() - 1;

        while (low < high) {
            int mid = low + (high - low) / 2;

            if (arr[mid] < arr[mid + 1]) {
                low = mid + 1;
            } else {
                high = mid;
            }
        }

        return low; 
    }
};

int main() {
    Solution sol;

    vector<int> arr = {0, 2, 5, 3, 1};

    cout << "Peak Index: "
         << sol.peakIndexInMountainArray(arr) << endl;

    return 0;
}