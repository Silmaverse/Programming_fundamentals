#include <stdio.h>
#include <math.h>

int main(){
 int t;
 scanf("%d",&t);
 while (t--){
   long long n;
   scanf("%lld",&n);
   long long ans=(n+1)*(n+1);
   printf("%lld\n",ans+1);
 }
 
 return 0;   
}