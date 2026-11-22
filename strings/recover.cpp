#include <bits/stdc++.h>
using namespace  std;

int main(){
 int t;
 cin>>t;
 while (t--){
   int n;
   cin>>n;
   string ans="aaa";
   n-=3;

   int tmp=min(25,n);
   ans[2]+=tmp;
   n-=tmp;

   tmp=min(25,n);
   ans[1]+=tmp;
   n-=tmp;

   tmp=min(25,n);
   ans[0]+=tmp;
   n-=tmp;
//    for (int i = 0; i < 26; i++){
//     for (int j = 0; j <26; j++){
//       for (int k = 0; k <26; k++){
//         if(i+j+k==n){
//           cur+=char(i+'a');
//           cur+=char(j+'a');  
//           cur+=char(k+'a');
//           ans=min(ans,cur);
//         }
//       }  
//     }
//    }
    cout<<ans<<'\n';
 }
 return 0;  
}