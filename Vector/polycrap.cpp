#include <bits/stdc++.h>
using namespace std;

int main(){
  int n;
  cin>>n;
  vector <int> v(n+1);
  for (int i = 1; i<=n; i++){
    cin>>v[i];
  }
  int ans=0;
  sort(v.begin()+1,v.end());
  for (int i = 1; i<=n; i++){
   if(v[i]==i) ans++; 
  }
  cout<<ans<<'\n';
  return 0;   
}