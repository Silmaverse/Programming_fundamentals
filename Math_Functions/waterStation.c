#include <stdio.h>
#include <stdlib.h>

int main(){
 int n;
 scanf("%d",&n);
 int ans=100;
 for (int i = 0; i <=100; i+=5){
    if(abs(n-ans)>abs(n-i)){
       ans=i; 
    }
 }
 printf("%d",ans); 
 return 0;   
}