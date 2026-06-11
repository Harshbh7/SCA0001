// make a program using using unordered_set to find the longest consecutive sequence in an array. easy method using unordered_sort

#include<iostream>
#include<unordered_set>
#include<vector>
using namespace std;

int main() {
    vector<int> arr = {100, 4, 200, 1, 3, 2};
    unordered_set<int> st(arr.begin(), arr.end());
    int longestStreak = 0;

    for (int num : st) {
        if (!st.count(num - 1)) { 
            int currentNum = num;

            int currentStreak = 1;

            while (st.count(currentNum + 1)) {
                currentNum++;
                currentStreak++;
            }

            longestStreak = max(longestStreak, currentStreak);
        }
    }

    cout << "Longest consecutive sequence length: " << longestStreak << endl;

    return 0;
}