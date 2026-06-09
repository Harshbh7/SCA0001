#include <iostream>
using namespace std;
int main(){
    int a, b, c;
    cout << "Enter three sides of the triangle: " << endl;
    cin >> a >> b >> c;
    if(a+b>c && a+c>b && b+c>a){
        cout << "The sides form a triangle" <<endl;
    }else{
        cout << " The sides do not form a triangle" << endl;
    }
}