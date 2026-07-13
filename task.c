#include <stdio.h>

int main(){
  int t;
  scanf("%d",&t);
  while (t--){
    int a,b,c;
    scanf("%d%d%d",&a,&b,&c);
    int x=a+b+c;
    int y=b+c;
    int z=c;
    printf("%d %d %d\n",x,y,z);
  }
return 0;
}