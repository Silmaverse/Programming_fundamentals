#include <bits/stdc++.h>
using namespace std;
int main(){
  int n;
  cin>>n;
  map<int,int>goodseq;
  for (int i = 0; i < n; i++){
    int val;
    cin>>val;
    goodseq[val]++;
  }
  int reuduce=0;
  for(auto it:goodseq){
    if(it.first!= it.second){
        if(it.first>it.second) reuduce+=it.second;
        else reuduce+=it.second-it.first;
    }
  }
  cout<<reuduce<<'\n';
  return 0;  
}