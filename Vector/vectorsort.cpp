#include <bits/stdc++.h>
using namespace std;

int main(){
 int n;
 cin>>n;
 vector<int> ans;
 for (int i = 0; i <n; i++){
    int val;
    cin>>val;
    ans.push_back(val);
 }

 sort(ans.begin(),ans.end());
 for(int x:ans){
   cout<< x <<" ";
 }
 
 return 0;   
}