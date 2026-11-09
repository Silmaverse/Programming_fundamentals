#include <stdio.h>
#include <string.h>

int main(){
  int t;
  scanf("%d",&t);
  while (t--){
    int n,m,k;
    scanf("%d%d%d",&n,&m,&k);
    int x,y;
    scanf("%d%d",&x,&y);
    char ans[5]="yes";
    for (int i = 0; i<k; i++){
     int xx,yy;
     scanf("%d%d",&xx,&yy);
     if((x+y)%2==(xx+yy)%2){ 
        strcpy(ans,"no");
      } 
    }
    printf("%s\n",ans);
  }
  
  return 0;  
}