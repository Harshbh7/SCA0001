#include <iostream>
using namespace std;
int main (){
    //counting number of bits in a number using right shift
    int a;
    int count= 0;
    cout << "Enter a number: " <<endl;
    cin >> a; //15
    while(a!=0){
        a=a>>1; //a=15/2=7...right shift
        count++;
    }
    cout << "Number of bits in " << a << " is: " << count << endl;

    //counting number of set bits
    int b; 
    cout << " Enter a number: " << endl;
    cin >> b;
    int count =0;
    while(b!=0){
        if(b&1==1){
            count++;
        }
        b=b>>1;
    }
    cout << "Number of set bits in " << b << " is: " << count << endl;
}