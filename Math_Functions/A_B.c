#include <stdio.h>

int main(){
 long long b;
 scanf("%lld",&b);
 for (int a = 1; a <=15; a++){
    long long tmp=1;
    for (int i = 0; i <a; i++){
       tmp*=a;
    }
    if(tmp==b){ 
      printf("%d",a);
      return 0;
    }
    
 }
 printf("-1");
 return 0;  
}