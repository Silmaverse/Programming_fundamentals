#include <bits/stdc++.h>
using namespace std;

int main(){
  int n,k;
  cin>>n>>k;
  vector<int>ans;
  for (int i=0; i<n; i++){
    int val;
    cin>>val;
    ans.push_back(val);
  }
  int count=0;
  for(int x:ans){
    if(x>=ans[k-1] && x>0){
      count++;
    }
  }
  cout<<count<<"\n";
  return 0;  
}