#include <bits/stdc++.h>
using namespace std;

int main(){
  int n;
  scanf("%d",&n);
  int robo[n],bionic[n];
  for(int i=0;i<n;i++){
    scanf("%d",&robo[i]);
  }
  for(int i=0;i<n;i++){
    scanf("%d",&bionic[i]);
  }
  int x=0,y=0,ans=0;
  for(int i=0;i<n;i++){
    if(robo[i]==1 && bionic[i]==1) continue;
    else if(robo[i]==1 && bionic[i]==0) x++;
    else if(robo[i]==0 && bionic[i]==1)y++;
  }
  if(x==0){
    printf("-1\n");
    return 0;
  }
  else{
    ans=(y+x)/x;
  }
  printf("%d\n",ans);
  return 0;
}