#include <stdio.h>

int main(){
  int t;
  scanf("%d",&t);
  while (t--){
   int n,m;
   scanf("%d%d",&n,&m);
   if(n>=m && (n-m)%2==0) printf("yes\n");
   else printf("No\n");
  }
  return 0;  
}