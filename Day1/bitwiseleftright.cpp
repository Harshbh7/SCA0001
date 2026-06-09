#include <iostream>
using namespace std;
int main(){
    int a, b;
    cout << "Enter two numbers: "<< endl;
    cin >> a >> b;//5 10
    cout << "Before shifting: a = " << a << ", b = " << b << endl;
    a=a<<1; //a=5*2=10...left shift
    b=b>>2; //b=10/4=2....right shift
    cout << "After shifting: a = " << a << ", b = " << b << endl;

    //left shift using while loop
    cout << "Enter a number: " <<endl;
    cin >> a; //15
    cout << "Before shifting: a = " << a << endl;
    int i=0;
    while(i<3){
        a=a<<1; //a=15*2=30...left shift
        i++;
        cout << "After shifting: a = " << a << endl;
    }

    //right shift using while loop
    cout << "Enter a number: " <<endl;
    cin >> b; //15
    cout << "Before shifting: b = " << b << endl;
    i=0;
    while(i<3){
        b=b>>1; //b=15/2=7...right shift
        i++;
        cout << "After shifting: b = " << b << endl;
    }
    return 0;
}