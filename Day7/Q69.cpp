// Q69: Sqrt(X)
#include <iostream>
using namespace std;

class Solution {
public:
    int mySqrt(int x) {
        if (x == 0 || x == 1) {
            return x;
        }

        int low = 1, high = x / 2, ans = 0;
        while (low <= high) {
            int mid = low + (high - low) / 2;
            if (mid <= x / mid) {
                ans = mid;
                low = mid + 1;
            } else {
                high = mid - 1;
            }
        }
        return ans;
    }
};

int main() {
    Solution sol;
    int x = 8;
    cout << "Input: " << x << '\n';
    int result = sol.mySqrt(x);
    cout << "Output: " << result << '\n';
    return 0;
}
