#include <bits/stdc++.h>
using namespace std;

int main(){
  map<int,int>mp;
  vector<int>order;
  int num;
  while(cin>>num){
    if(mp[num]==0) order.push_back(num);
    mp[num]++;
  }
  for(auto x:order){
    cout<<x<<" "<<mp[x]<<endl;
  }
  
  return 0;  
}