#include <stdio.h>
# include <string.h>

int main(){
  int t;
  scanf("%d",&t);
  while (t--){
   char str[100001];
   scanf("%s",&str);
   int n=strlen(str),i;
   //first block 1 befor finding 0
   for(i=0;i<n;i++){
     if(str[i]=='0') break;
   }
   //all are 1 then 0
   if(i==n){
     printf("0\n");
     continue;
   }

   //second block 0 befor finding 1 1110001
   for(;i<n;i++){
     if(str[i]=='1') break;
   }
   //third block 1 before finding 0 111000111000
   for(;i<n;i++){
     if(str[i]=='0') break;
   }
   if(i==n)printf("1\n");
   else printf("2\n");
  }
  return 0;
}