#include <stdio.h>
#include <string.h>
#include <ctype.h>

int uppercaseIndex(char str[]){

    int upperIndex=0;
    for (int j = 0; j < strlen(str); j++){
       if(isupper(str[j])){
        upperIndex=j;
       }
    }
    
    return upperIndex+1;    
}

int main(){
 char str[1001];
 scanf("%s",str);
 int upperindex =uppercaseIndex(str);
 printf("%d",upperindex);
 return 0;
 
}