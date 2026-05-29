#include <stdio.h>
#include <string.h>

int main(){
  int t;
  scanf("%d",&t);
  while (t--)
  {
    /* code */
    
    int n,k;
    scanf("%d%d",&n,&k);
    char eraser[n+1];
    scanf("%s",&eraser);
    int count=0;
    for(int i=0;i<n;i++){
      if(eraser[i]=='B'){
        i+=k-1;
        count++;
      }
    }
    printf("%d\n",count);
  }
  return 0;

}