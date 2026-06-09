#include <iostream>
using namespace std;
int main(){
     //swapping operation
    int a, b, c;
    cout << "Enter two numbers:"<< endl;
    cin >> a>> b;
    cout << "Before swapping: a = " << a << ", b = " << b << endl;
    c=a;
    a=b;
    b=c;
    cout << "After swapping: a = " << a << ", b = " << b << endl;

    //swapping without using third variable
    cout <<"Enter two numbers: "<< endl;
    cin >> a >> b;
    cout << "Before swapping: a = " << a << ", b = " << b << endl;
    a=a+b;  //a=5+10=15
    b=a-b; //b=15-10=5
    a=a-b; //a=15-5=10
    cout << "After swapping: a = " << a << ", b = " << b << endl;

    //swapping using bitwise operator
    cout <<"Enter two numbers: "<< endl;
    cin >> a >>b;
    cout << "Before swapping: a = " << a << ", b = " << b << endl;
    a=a^b; //a=5^10=15
    b= a^b; //b=15^10=5... it means 5^10^10=5
    a=a^b; //a=15^5=10
    cout << "After swapping: a = " << a << ", b = " << b << endl;
     return 0;
}