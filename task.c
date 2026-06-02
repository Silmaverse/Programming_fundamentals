#include <stdio.h>
#include <string.h>
char str[1000001];

int main(){
  scanf("%s",str);
  int n=strlen(str);
  int freq[26];
  for(int i=0;i<26;i++){
      freq[i]=0;
  }
  for(int i=0;i<n;i++){
    freq[str[i]-'A']++;
  }
  //even number of letter;
  if(n%2==0){
    int flag=1;
    for(int i=0;i<26;i++){
      if(freq[i]%2==1){
        flag=0;
        break;
      }
    }
    if(flag==0) printf("NO SOLUTION\n");
    else{
      for(int i=0;i<26;i++){
        //freq[i]/2
        for(int j=0;j<freq[i]/2;j++){
          char ch=(char)('A'+i);
          printf("%c",ch);
        }        
      }
      for(int i=25;i>=0;i--){
        //freq[i]/2
        for(int j=0;j<freq[i]/2;j++){
          char ch=(char)('A'+i);
          printf("%c",ch);
        }
      }
      printf("\n");
    }

  }else{
    int count=0,oddalpha=-1;
    for(int i=0;i<26;i++){
      if(freq[i]%2==1){
        count++;
        oddalpha=i;
      }
    }
    if(count==1){
      for(int i=0;i<26;i++){
        if(i!=oddalpha){
          for(int j=0;j<freq[i]/2;j++){
            char ch=(char)('A'+i);
            printf("%c",ch);
          }        
        }
      }
      
      for(int j=0;j<freq[oddalpha];j++){
          char ch=(char)('A'+oddalpha);
          printf("%c",ch);
      }
      
      for(int i=25;i>=0;i--){
        if(i!=oddalpha){
          for(int j=0;j<freq[i]/2;j++){
            char ch=(char)('A'+i);
            printf("%c",ch);
          }
        }
      }
      printf("\n");

    }else{
      printf("NO SOLUTION\n");
    }
  }

  return 0;
}