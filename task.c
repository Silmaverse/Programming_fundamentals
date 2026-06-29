#include <stdio.h>
#include <math.h>

int main(){
   int t;
   scanf("%d",&t);
   while (t--){
     int x;
     scanf("%d",&x);
     double getcommision=(x*20)/100.0;
     int sell=ceil(100/getcommision);
     printf("%d\n",sell);
   }
   return 0;
}