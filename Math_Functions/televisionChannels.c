#include <stdio.h>

int main(){
 int x;
 scanf("%d",&x);
 int count=0;
 while (x){
   if(x%2==1) count++; 
   x--;
 }
 printf("%d",count);
 return 0;   
}