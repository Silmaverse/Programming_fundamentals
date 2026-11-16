#include <bits/stdc++.h>
using namespace std;

int main(){
  int n;
  cin>>n;
  vector<int>a(n);
  vector<int>b(n);
  for (int i = 0; i < n; i++){
    cin>>a[i];
  }
  for (int i = 0; i < n; i++){
    cin>>b[i];
  }
  int fmax=*max_element(a.begin(),a.end());
  int secmax=*max_element(b.begin(),b.end());
  int sum=fmax+secmax;
  cout<<sum<<'\n';
  return 0;  
}