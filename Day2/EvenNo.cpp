
#include <iostream>
using namespace std;

// use bitwise operator to check if a number is even or odd

int main() {
    for (int i = 1; i <= 100; i++) {
        if ((i & 1) == 0) { 
            cout << i << " "; 
        }
    }
    return 0;
}