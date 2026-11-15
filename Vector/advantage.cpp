#include <bits/stdc++.h>
using namespace std;

int main(){
  int t;
  cin>>t;
  while (t--){
    int n;
    cin>>n;
    vector <int> v(n);
    for (int i = 0; i <n; i++){
        cin>>v[i];
    }
    vector<int>b(v);
    sort(b.begin(),b.end());
    for (int i = 0; i <n; i++){
       if(v[i]!=b[n-1]) cout<< v[i]-b[n-1]<<" ";
       else cout<< v[i]-b[n-2]<<" ";  
    }
    
    cout<<'\n';
  }
  
  return 0;   
}