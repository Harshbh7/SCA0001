// Another Approach for this code
#include <iostream>
using namespace std;

int main() {
    int sum1 = 0;
    int sum2 = 0;
    for (auto ch : s){
        sum1 += ch;
    }
    for (auto ch : t){
        sum2 += ch;
    }
    return (char) (sum2 - sum1);
}