#include <stdio.h>
#include <math.h>

int main(){
  int n;
  scanf("%d",&n);
  int ans=0;
  for(int a=1;a<=n;a++){
    for(int b=a;b<=n;b++){
      int csqua=(a*a+b*b);
      int c=sqrt(csqua);
      if(c>=1 && c<=n && c*c==csqua){
        ans++;
      }
    }
  }
  printf("%d",ans);
  return 0;
}