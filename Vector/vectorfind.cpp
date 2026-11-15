#include <bits/stdc++.h>
using namespace std;

int main(){
  int t;
  cin>>t;
  while (t--){
    int n;
    cin>>n;
    vector<int>count(n+1);
    int val=-1;
    for (int i = 0; i <n; i++){
      int val;
      cin>>val;
      count[val]++;
    }
    for (int i = 1; i <=n; i++){
      if(count[i]>=3){
        val=i;
        break;  
      }
    }
    cout<<val<<'\n';
  }
  return 0;  
}