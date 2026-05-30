#include <stdio.h>
#include <string.h>

int main(){
  int n,m;
  scanf("%d%d",&n,&m);
  char str[n+1];
  char ttr[m+1];
  scanf("%s",str);
  scanf("%s",ttr);
  int pre=1,suff=1;
  for(int i=0;i<n;i++){
    if(str[i]!=ttr[i]){
      pre=0;
      break;
    }
  }
  int l=m-1;
  for(int i=n-1;i>=0;i--){
    if(str[i]!=ttr[l]){
      suff=0;
      break;
    }
    l--;
  }
  if(pre==1 && suff==1){
    printf("0");
    return 0;
  }
  if(pre==1){
    printf("1");
    return 0;
  }
  if(suff==1){
    printf("2");
    return 0;
  }
  if(pre==0 && suff==0){
    printf("3");
    return 0;
  }
  
  return 0;
}