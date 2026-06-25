  #include <stdio.h>
  #include <math.h>

  int main(){
    int r1,r2,d1,d2;
    scanf("%d%d%d%d",&r1,&r2,&d1,&d2);
    int finaldominator=r1+d1;
    int finaleverules=r2+d2;
    if(finaldominator>finaleverules){
      printf("Dominater\n");
    }else{
      printf("Everule\n");
    }
    return 0;
  }