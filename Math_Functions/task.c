#include <stdio.h>

int mathFunction(int n,int p,int m){
  
  int count=0;
  for (int i = 1; i<=n; i++){
    if(m<=n) count++; 
    m+=p;
  }
  return count;

}


int main(){
  int n ,m,p;
  scanf("%d%d%d",&n,&m,&p);
  int result=mathFunction(n,p,m);
  printf("%d",result);
  return 0;
}