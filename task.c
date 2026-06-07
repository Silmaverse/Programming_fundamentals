#include <stdio.h>
int isPalindrome(int x){
  int rev=0, temp=x;
  while (temp>0){
    rev=rev*10+temp%10;
    temp/=10;
  }
  return rev==x;
}

int main(){
  int t;
  scanf("%d",&t);
  while (t--){
    
    
    int n;
    scanf("%d",&n);
    int found=0;
    for(int a=0;a<=n;a++){
      if(isPalindrome(a)){
        int b=n-a;
        if(b>=0 && b%12==0){
          printf("%d %d\n",a,b);
          found=1;
          break;
        }
      }
    }
    if(found==0) printf("-1\n");

  }
  return 0;
}