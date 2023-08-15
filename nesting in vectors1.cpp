// Online C++ compiler to run C++ program online
#include <iostream>
#include<bits/stdc++.h>
using namespace std;

void printvec(vector<pair<int,int> > &v){
    cout<<"Size of vector n:"<<v.size()<<endl;
    cout<<"Vector n is: ";
    for(int i=0;i<v.size();++i){
        cout<<v[i].first<<" "<<v[i].second<<endl;
    }
}

int main() {
    // Write C++ code here
    vector<pair<int,int> > n={{1,2},{3,9},{8,0}};
    printvec(n);
    return 0;
}
