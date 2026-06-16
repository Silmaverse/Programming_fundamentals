#include <stdio.h>

int main(){
  int t;
  scanf("%d",&t);
  while (t--){ 
    int arr[3];
    for(int i=0;i<3;i++) scanf("%d",&arr[i]);
    int l=0,r=0;
    for(int i=0;i<3;i++){
      if(arr[i]==0){
        l=1;
      }else if(arr[i]==1){
        r=1;
      }
    }
    if(l==1 && r==1) printf("%d\n",1);
    else printf("%d\n",0);
  } 
  return 0;
}