#include <bits/stdc++.h>
using namespace std;

int main(){
  int t;
  scanf("%d",&t);
  while (t--){
   int n;
   scanf("%d",&n);
   char str[n+1];
   scanf("%s",str);
   int i=0,j=n-1;
   for ( i = 0; i < n; i++){
    if(str[i]=='A') break;
   }
   for ( j = n-1; j>=0; j--){
    if(str[j]=='B') break;
   }
   int ans=0;
   if(i>j) ans=0;
   else ans=j-i;
   printf("%d\n",ans);
  }
  return 0;
}