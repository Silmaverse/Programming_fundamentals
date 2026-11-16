#include <bits/stdc++.h>
using namespace std;

int main(){
  int n;
  cin>>n;
  vector <int> v(n);
  for (int i =0; i<n; i++){
    cin>>v[i];
  }
  int pos=0;
  sort(v.begin(),v.end());
  for (int i = 0; i<n; i++){
   if(v[i]>pos) pos++; 
  }
  cout<<pos<<'\n';
  return 0;   
}