#include <stdio.h>

int main(){
  int a ,b,c;
  scanf("%d%d%d",&a,&b,&c);
  a=7-a;
  b=7-b;
  c=7-c;
  int sum=a+b+c;
  printf("%d",sum);
  return 0;  
}