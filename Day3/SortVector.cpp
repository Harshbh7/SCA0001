#include   <iostream>
#include   <vector>
#include   <algorithm>
using namespace std;

int main() {
    vector<int> myVector; 

    myVector.push_back(50);
    myVector.push_back(20);
    myVector.push_back(40);
    myVector.push_back(10);
    myVector.push_back(30);

    cout << "Values in the vector before sorting: ";
    for (size_t i = 0; i < myVector.size(); i++) {
        cout << myVector[i] << " ";
    }
    cout << endl;

    sort(myVector.begin(), myVector.end());

    cout << "Values in the vector after sorting: ";
    for (size_t i = 0; i < myVector.size(); i++) {
        cout << myVector[i] << " ";
    }
    cout << endl;

    return 0;
}