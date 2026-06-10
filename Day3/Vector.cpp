// create a vector and store 5 values in it, then print the values
#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> myVector; 

    myVector.push_back(10);
    myVector.push_back(20);
    myVector.push_back(30);
    myVector.push_back(40);
    myVector.push_back(50);

    cout << "Values in the vector: ";
    for (size_t i = 0; i < myVector.size(); i++) {
        cout << myVector[i] << " ";
    }
    cout << endl;

    return 0;
}