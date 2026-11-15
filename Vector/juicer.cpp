#include <bits/stdc++.h>
using namespace std;

int main(){
 int n,b,d;
 cin>>n>>b>>d;
 vector<int>v(n);
 for (int i = 0; i<n; i++){
    int val;
    cin>>val;
    if(val<=b) v.push_back(val);
 }
 int empty_count=0;
 int sum=0;
 for (int i = 0; i <v.size(); i++){
    sum+=v[i];
    if(sum>d) {
       empty_count++;
       sum=0; 
    }
 }
 
 cout<<empty_count<<'\n';
 return 0;   
}