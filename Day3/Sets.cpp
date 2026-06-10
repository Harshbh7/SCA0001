#include<iostream>
#include<vector>
#include<algorithm>
#include<set>

using namespace std;

int main(){

    vector<int>v;

    v.push_back(5);
    v.push_back(3);
    v.push_back(3);
    v.push_back(4);
    v.push_back(2);
    v.push_back(2);

    set<int>st;
    
    for(int i = 0; i<v.size(); i++){
        
        st.insert(v[i]);
    }


    for(auto i:st){

        cout<<i<<endl;
    }

    return 0;
}