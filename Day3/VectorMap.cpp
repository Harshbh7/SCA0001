//create a vector v with 10 element with dublicate values and then create a map to store the count of each element in the vector and print the count of each element in the vector, use key and value pair to store the count of each element in the vector
#include <iostream>
#include <vector>
#include <map>
using namespace std;

int main() {
    vector<int> v;

    v.push_back(5);
    v.push_back(3);
    v.push_back(3);
    v.push_back(4);
    v.push_back(2);
    v.push_back(2);
    v.push_back(5);
    v.push_back(4);
    v.push_back(3);
    v.push_back(2);

    map<int, int> countMap;

    for (size_t i = 0; i < v.size(); i++) {
        countMap[v[i]]++;
    }

    cout << "Element Count in the Vector:" << endl;
    for (const auto& pair : countMap) {
        cout << "Element: " << pair.first << ", Count: " << pair.second << endl;
    }

    return 0;
}