#include <iostream>
#include <string>
#include <cctype>
using namespace std;

class Solution {
public:
    bool detectCapitalUse(string word) {
        int capitalCount = 0;

        for(char ch : word) {
            if(isupper(ch))
                capitalCount++;
        }

        return capitalCount == word.size() ||
               capitalCount == 0 ||
               (capitalCount == 1 && isupper(word[0]));
    }
};

int main() {
    Solution obj;

    string word;
    cout << "Enter word: ";
    cin >> word;

    if(obj.detectCapitalUse(word))
        cout << "true" << endl;
    else
        cout << "false" << endl;

    return 0;
}