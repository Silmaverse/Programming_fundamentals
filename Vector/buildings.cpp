#include <bits/stdc++.h>
using namespace std;

int main(){
  int n;
  cin>>n;
  vector<int>v(n);
  for (int i = 0; i <n; i++){
    cin>>v[i];
  }
  int pos=-1;
  for (int i = 1; i <n; i++){
    if(v[i]>v[0]){
       pos=i; 
       cout<<pos+1<<'\n';
       return 0;
    }
  }
  cout<<pos<<'\n';
  return 0;  
}