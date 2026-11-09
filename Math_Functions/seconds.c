#include <stdio.h>

int main(){
  int seconds;
  scanf("%d",&seconds);
  int h=seconds/3600;
  int m=(seconds%3600)/60;
  int s=seconds%60;
  printf("%d:%d:%d\n",h,m,s);
  return 0;  
}