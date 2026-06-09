#include <iostream>
using namespace std;
int main()
{
    cout << "Hello world!" << endl;
    cout <<"we are checking even and odd numbers " <<endl;
    int x ;
    cout << "Enter a number: " << endl;
    cin >> x ;
     
    if(x%2==0){
        cout << "The number is even" <<endl;
    } else{
        cout << "The number is odd" <<endl;
    }
    cout <<"Now we are checking the same thing with bitwise operator" <<endl;
    int y;
    cout << "Enter a number: " << endl;
    cin >> y;
    if(y&1==1){
        cout << "The number is odd" <<endl;
    } else{
        cout << "The number is even" <<endl;
    }
    return 0;
}