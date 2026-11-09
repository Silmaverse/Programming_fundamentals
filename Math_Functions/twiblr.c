#include <stdio.h>

int main(){
  int a,b;
  scanf("%d%d",&a,&b);
  int ans=2*a+100;
  ans-=b;
  printf("%d",ans);
  return 0;  
}