#include <bits/stdc++.h>
using namespace std;

int main(){
  int n;
  cin>>n;
  vector<int> v(n);
  for (int i = 0; i <n; i++){
    int val;
    cin>>val;
    v[i]=val;
  }
  int pos;
  cin>>pos;
  v.erase(v.begin()+pos-1);
  int first,last;
  cin>>first>>last;
  v.erase(v.begin()+first-1,v.begin()+last-1);
  cout<<v.size()<<'\n';
  for(int ele:v){
    cout<<ele<<" ";
  }

  return 0;  
}