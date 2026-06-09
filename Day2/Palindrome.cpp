// check palindrome number
#include <iostream>
using namespace std;
int main() {
    int n, original, reversed = 0, remainder;
    cout << "Enter an integer: ";
    cin >> n;
    original = n;

    while (n != 0) {
        remainder = n % 10;
        reversed = reversed * 10 + remainder;
        n /= 10;
    }

    if (original == reversed) {
        cout << original << " is a palindrome." << endl;
    } else {
        cout << original << " is not a palindrome." << endl;
    }

    return 0;
}