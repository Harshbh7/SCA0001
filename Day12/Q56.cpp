#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {

        // Print input intervals
        cout << "Before Merging:\n";
        for (auto interval : intervals) {
            cout << "[" << interval[0] << ", " << interval[1] << "] ";
        }
        cout << endl;

        sort(intervals.begin(), intervals.end());

        vector<vector<int>> ans;

        int n = intervals.size();
        int val1 = intervals[0][0];
        int val2 = intervals[0][1];

        for (int i = 1; i < n; i++) {
            int ele1 = intervals[i][0];
            int ele2 = intervals[i][1];

            if (val2 >= ele1) {
                val2 = max(val2, ele2);
            } else {
                ans.push_back({val1, val2});
                val1 = ele1;
                val2 = ele2;
            }
        }

        ans.push_back({val1, val2});

        return ans;
    }
};

int main() {

    Solution obj;

    vector<vector<int>> intervals = {
        {1, 3},
        {2, 6},
        {8, 10},
        {15, 18}
    };

    vector<vector<int>> ans = obj.merge(intervals);

    cout << "Merged Intervals:\n";
    for (auto interval : ans) {
        cout << "[" << interval[0] << ", " << interval[1] << "] ";
    }
    cout << endl;

    return 0;
}