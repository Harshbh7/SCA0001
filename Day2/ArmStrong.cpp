// find is armstrong number or not in simple way (use power function for more than 3 digit number)
#include <iostream>
#include <cmath>
using namespace std;
int main() {
    int n, original, remainder, result = 0;
    cout << "Enter an integer: ";
    cin >> n;
    original = n;

    while (n != 0) {
        remainder = n % 10;
        result += pow(remainder, 3); 
        n /= 10;
    }

    if (original == result) {
        cout << original << " is an Armstrong number." << endl;
    } else {
        cout << original << " is not an Armstrong number." << endl;
    }

    return 0;
}