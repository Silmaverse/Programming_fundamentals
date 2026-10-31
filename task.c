#include <stdio.h>
#include <string.h>

int main(){
  int t;
  scanf("%d",&t);
  while (t--){
    int n,m;
    scanf("%d%d",&n,&m);
    char p[n+1],q[m+1];
    scanf("%s%s",p,q);
    if(m>n){
      printf("No\n");
      continue;
    }
    int sum1=0,sum2=0;
    for (int i = 0; i < n; i++){
        sum1+=p[i];
    }
    for (int i = 0; i <m; i++){
        sum2+=q[i];
    }
    int ans=sum1-sum2;
    if(ans==340) printf("Yes\n");
    else printf("No\n");  
      
    
        
  }
  return 0;
}

