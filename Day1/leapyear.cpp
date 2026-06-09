#include <iostream>
using namespace std;
int main(){
    int year;
    cout << "Enter a year: " <<endl;
    cin >> year;
    if((year%4==0) || (year%100==0 && year%400==0)){
        cout << year << " is a leap year" << endl;
    } else{
        cout << year << " is not a leap year" << endl;
    }
     //year%100!=0 means that the year is not a century year. For example, 2000 is a leap year because it is divisible by 400, but 1900 is not a leap year because it is divisible by 100 but not by 400.
}