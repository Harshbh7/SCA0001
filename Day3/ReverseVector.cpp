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

    cout << "Values in the vector before reversing: ";
    for (size_t i = 0; i < myVector.size(); i++) {
        cout << myVector[i] << " ";
    }
    cout << endl;

    // Reverse the vector
    for (size_t i = 0; i < myVector.size() / 2; i++) {
        swap(myVector[i], myVector[myVector.size() - 1 - i]);
    }

    cout << "Values in the vector after reversing: ";
    for (size_t i = 0; i < myVector.size(); i++) {
        cout << myVector[i] << " ";
    }
    cout << endl;

    return 0;
}