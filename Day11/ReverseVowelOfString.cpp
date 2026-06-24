#include <iostream>
#include <string>
using namespace std;

class Solution {
public:
    bool check(char ch) {
        return ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
               ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U';
    }

    string reverseVowels(string s) {
        int l = 0;
        int r = s.size() - 1;

        while (l < r) {
            if (!check(s[l])) {
                l++;
            }
            else if (!check(s[r])) {
                r--;
            }
            else {
                swap(s[l], s[r]);
                l++;
                r--;
            }
        }

        return s;
    }
};

int main() {
    Solution obj;

    string s;
    cout << "Enter a string: ";
    getline(cin, s);

    cout << "Output: " << obj.reverseVowels(s) << endl;

    return 0;
}