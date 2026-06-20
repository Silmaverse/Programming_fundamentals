#include <bits/stdc++.h>
using namespace std;

int main(){
  int n,m;
  scanf("%d%d",&n,&m);
  char s[26],x[26];
  scanf("%s%s", x, s);
  bool ok=false;
  for(int i=0;i<6;i++){
    char *pos=strstr(x,s);
    if(pos){
      printf("%d",i);
      ok=true;
      break;
    }else{
      char newstr[801];
      strcpy(newstr, x);
      strcat(x, newstr);
    }
  }
  if(!ok){
    printf("-1\n");
  }
  return 0;
}