#include <bits/stdc++.h>
using namespace std;

int main(){
  int t;
  scanf("%d",&t);
  while (t--){
    int n,a,b;
    scanf("%d%d%d",&n,&a,&b);
    char str[n+1];
    scanf("%s",str);
    int ans=0;
    if(b>=0) ans=(a+b)*n;
    else{
      int block=1;
      for(int i=0;i<n-1;i++){
        if(str[i]!=str[i+1])block++;
      }
      int op=(block/2)+1;
      ans=a*n+b*op;
    }
    printf("%d\n",ans);
  }
  
  return 0;
}