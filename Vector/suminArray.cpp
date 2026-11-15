#include <bits/stdc++.h>
using namespace std;

int main(){
 int t;
 cin>>t;
 while (t--){
   int n;
   cin>>n;
   vector <int> a(n);
   for (int i = 0; i <n; i++){
      cin>>a[i];
   }
   int maxf=*max_element(a.begin(),a.end()); 
   vector<int>b;
   for (int i = 0; i < n; i++){
    if(a[i]!=maxf) b.push_back(a[i]);
   }
   int secondmax=*max_element(b.begin(),b.end());
   int sum=maxf+secondmax;
   cout<<sum<<'\n';
 }
 
 return 0;   
}