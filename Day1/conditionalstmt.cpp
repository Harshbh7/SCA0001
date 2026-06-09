#include <iostream>
using namespace std;
int main(){
    int a, b, c;
    cout << "Enter three numbers: " << endl;
    cin >> a >> b >> c;
    if(a>b && a> c){
        cout << "The largest number is: "<< a << endl;
    }else if( b>a && b>c){
        cout << "The largest number is: "<< b << endl;
    }else{
        cout << "The largest number is c: " << c << endl;
    }

    //using max function
    int x, y, z;
    cout << "Enter three numbers: " << endl;
    cin >> x >> y >> z; 
    cout << "The largest number is: " << max(x, max(y,z)) << endl;
    return 0;
}