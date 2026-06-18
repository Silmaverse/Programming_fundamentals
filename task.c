#include <stdio.h>
#include <string.h>

int main(){
  int t;
  scanf("%d",&t);
  while (t--){
    int k;
    scanf("%d",&k);
    char *direction[]={"North","East","South","West"};
    int idx=0;
    for(int i=0;i<k;i++){
      idx=(idx+1)%4;
    }
    printf("%s\n",direction[idx]);
  }
  return 0;
}