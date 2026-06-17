#include <stdio.h>
#include <string.h>
int main(){
  int t;
  scanf("%d",&t);
  while (t--){ 
    int n;
    scanf("%d",&n);
    int ans=0;
    for(int firstdigit=1;firstdigit<=9;firstdigit++){
      int num=firstdigit;
      while(num<=n){
        ans++;
        num=num*10; 
      }
    }
    printf("%d\n",ans);
  }
    return 0;
}