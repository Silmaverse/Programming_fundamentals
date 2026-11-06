#include <stdio.h>
#include <stdlib.h>

int minsecondstoTypePin(char str[]){

    int ans=0;
     int last=1;
     for (int i = 0; i < 4; i++){
        int p;
        if(str[i]=='0') p=10;
        else{
          p=str[i]-'0';
        }
        int tmp=abs(p-last);
        ans+=tmp+1;
        last=p;
     }
    return ans;

}


int main(){
  int t;
  scanf("%d",&t);
  while (t--){
    char str[10];
    scanf("%s",str);
    int ans=minsecondstoTypePin(str); 
    printf("%d\n",ans);

  }
  
  
  return 0;  
}