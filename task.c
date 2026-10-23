#include <stdio.h>
#include <string.h>
#include <stdbool.h>

bool majorityVote(int n){
  char str[99];  
  int fcount=0,agcount=0;
  for (int i = 0; i < n; i++){
      scanf("%s",str);
      if(!strcmp(str,"For")) fcount++;
      else agcount++;
  }

  if(fcount>agcount) return true;
  else return false;
  
}

int main(){
  int n;
  scanf("%d",&n);
  bool ans=majorityVote(n);
  if(ans) printf("Yes\n");
  else printf("No\n");
  return 0;
}
