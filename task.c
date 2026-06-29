#include <stdio.h>

int main(){
   int t;
   scanf("%d",&t);
   while (t--){
     int n,x;
     scanf("%d %d",&n,&x);
     int un=(2*n)-x;
     if(un>=x) printf("0\n");
     else{
      int min=x-un;
      printf("%d\n",min);
     } 
   }
   return 0;
}