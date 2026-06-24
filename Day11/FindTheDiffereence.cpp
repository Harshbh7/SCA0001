#include <iostream>
#include <string>
using namespace std;

class Solution {
public:
    char findTheDifference(string s, string t) {
        char result = 0;

        for(char ch : s) {
            result ^= ch;
        }

        for(char ch : t) {
            result ^= ch;
        }

        return result;
    }
};

int main() {
    Solution obj;

    string s, t;

    cout << "Enter s: ";
    cin >> s;

    cout << "Enter t: ";
    cin >> t;

    cout << "Extra Character: "
         << obj.findTheDifference(s, t) << endl;

    return 0;
}