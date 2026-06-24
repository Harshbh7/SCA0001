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
            if (!check(s[l]))
                l++;
            else if (!check(s[r]))
                r--;
            else {
                swap(s[l], s[r]);
                l++;
                r--;
            }
        }
        return s;
    }
};