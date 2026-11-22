#include <bits/stdc++.h>
using namespace std;

int main(){
 int n,k;
 cin>>n>>k;
 vector<string> rank(n);
 for (int i = 0; i <n; i++){
    cin>>rank[i];
 }
 sort(rank.begin(),rank.begin()+k);
 for (int i = 0; i <k; i++){
   cout<<rank[i]<<'\n'; 
 }
 return 0;   
}