#include <stdio.h>

int main(){
  int t;
  scanf("%d",&t);
  while (t--){
   int n,a,b;
   scanf("%d%d%d",&n,&a,&b);
   int ans=n*a;
   if(b<2*a){
     ans=(n/2)*b+(n%2)*a;
    }
    printf("%d\n",ans);
 }
return 0;   
}
