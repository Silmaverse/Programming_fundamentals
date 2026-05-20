#include<stdio.h>

int main(){

    int n;
    scanf("%d",&n);
    char arr[n][n];
    char newarr[n][n];
    for(int i=0;i<n;i++){
      for(int j=0;j<n;j++){
         scanf(" %c",&arr[i][j]);
         newarr[i][j]=arr[i][j];
      }
    }

    //1st row
    for(int j=1;j<n;j++){
      newarr[0][j]=arr[0][j-1];
    }
    //last col
    for(int i=1;i<n;i++){
      newarr[i][n-1]=arr[i-1][n-1];
    }
    //last row
    for(int j=n-2; j>=0;j--){
      newarr[n-1][j]=arr[n-1][j+1];
    }
    //1st col
    for(int i=n-2; i>=0;i--){
      newarr[i][0]=arr[i+1][0];
    }
     printf("\n");

    for(int i=0;i<n;i++){
      for(int j=0;j<n;j++){
         printf("%c",newarr[i][j]);
      }
      printf("\n");
    }

    return 0;
}