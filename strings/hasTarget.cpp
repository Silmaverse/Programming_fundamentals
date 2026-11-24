#include <bits/stdc++.h>
using namespace std;
int main(){
 int t;
 cin>>t;
 while (t--){
  int n;
  cin>>n;
  string s;
  cin>>s;
  char minchar=*min_element(s.begin(),s.end());
  int mni=s.rfind(minchar);
  s.erase(mni,1);
  s=minchar+s;
  cout<<s<<'\n';
 }
 return 0;   
}