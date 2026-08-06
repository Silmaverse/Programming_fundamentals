#include <stdio.h>
#include <string.h>

int main(){
   int t;
   scanf("%d",&t);
   while (t--){
    int n;
    scanf("%d",&n);
    char b[n+1],a[n+1];
    scanf("%s",b);
    if(n==1){
     printf("%c\n",'1'); 
    }
    else{
      printf("%c",'1');
      a[0]='1';
      for(int i=1;i<n;i++){
        if(a[i-1]-'0'+b[i-1]-'0'!=('1'-'0')+b[i]-'0'){
          a[i]='1';
          printf("%c",a[i]);
        }else{
          a[i]='0';
          printf("%c",a[i]);
      }
    }
    printf("\n");
   }
  }
  return 0;
}