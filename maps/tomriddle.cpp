#include <bits/stdc++.h>
using namespace std;

int main(){
  int n;
  cin>>n;
  map<string,bool>horcruxes;
  while (n--){
    string name;
    cin>>name;
    if(horcruxes[name]==true) cout<<"Yes\n";
    else cout<<"No\n";
    horcruxes[name]=true;
  }
  return 0; 
}