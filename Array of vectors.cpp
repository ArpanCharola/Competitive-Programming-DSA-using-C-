#include <iostream>
#include<bits/stdc++.h>
using namespace std;
void printVec(vector<int> &b){
  
  for (int i=0;i<b.size();i++){
    cout<<b[i]<<" ";
  }cout<<endl;
}

int main() {
  int N;
  cout<<"Input total no. of vectors:";
  cin>>N;   //inputs size of array of vector or total vectors
  vector<int> a[N];
  for (int i=0;i<N;i++){
    int n;
    cout<<"size of vector "<<i+1<<":"<<endl; //inputs size of i vector
    cin>>n;
    for (int j=0;j<n;j++){
      int x;
      cout<<"Enter element:"<<endl;//inputs element in vector i according to it's size
      cin>>x;
      a[i].push_back(x);
    }
  }
  cout<<"The vectors:"<<endl;
  for(int k=0;k<N;k++){ //loop for printing vectors
    printVec(a[k]);
  }
  cout<<"Printing 2nd element of vector2:"; //works like 2d array
  cout<<a[1] [1];
}
