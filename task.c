#include<stdio.h>

int main(){
  int h,w;
  scanf("%d%d",&h,&w);
  char arr[h][w];

  for(int i=0;i<h;i++){
    for(int j=0;j<w;j++){
      scanf(" %c",&arr[i][j]);
    }
  }

  for(int i=0;i<h;i++){
    for(int j=0;j<w;j++){
      //type 1 row right check
      if(i>=0  && i<h && j+4>=0 && j+4<w){
        if(arr[i][j]=='s' && arr[i][j+1]=='n' && arr[i][j+2]=='u'&& arr[i][j+3]=='k' && arr[i][j+4]=='e'){
          printf("%d %d\n%d %d\n%d %d\n%d %d\n%d %d\n",i+1,j+1,i+1,j+2,i+1,j+3,i+1,j+4,i+1,j+5);
          return 0;
        }
      }
        //type 2 row left check
        if(i>=0  && i<h && j-4>=0 && j-4<w){
          if(arr[i][j]=='s' && arr[i][j-1]=='n' && arr[i][j-2]=='u'&& arr[i][j-3]=='k' && arr[i][j-4]=='e'){
            printf("%d %d\n%d %d\n%d %d\n%d %d\n%d %d\n",i+1,j+1,i+1,j-1+1,i+1,j-2+1,i+1,j-3+1,i+1,j-4+1);
            return 0;
          }
        }
        //type 3 col top check
        if(i-4>=0 && i-4<h && j>=0 && j<w){
          if(arr[i][j]=='s' && arr[i-1][j]=='n' && arr[i-2][j]=='u'&& arr[i-3][j]=='k' && arr[i-4][j]=='e'){
            printf("%d %d\n%d %d\n%d %d\n%d %d\n%d %d\n",i+1,j+1,i-1+1,j+1,i-2+1,j+1,i-3+1,j+1,i-4+1,j+1);
            return 0;
          }
        }
        //type 4 col bottom check
        if(i+4>=0  && i+4<h && j>=0 && j<w){
          if(arr[i][j]=='s' && arr[i+1][j]=='n' && arr[i+2][j]=='u'&& arr[i+3][j]=='k' && arr[i+4][j]=='e'){
            printf("%d %d\n%d %d\n%d %d\n%d %d\n%d %d\n",i+1,j+1,i+1+1,j+1,i+2+1,j+1,i+3+1,j+1,i+4+1,j+1);
            return 0;
          }
        }
        //type 5 top left check
        if(i-4>=0 && i-4<h && j-4>=0 && j-4<w){
          if(arr[i][j]=='s' && arr[i-1][j-1]=='n' && arr[i-2][j-2]=='u'&& arr[i-3][j-3]=='k' && arr[i-4][j-4]=='e'){
            printf("%d %d\n%d %d\n%d %d\n%d %d\n%d %d\n",i+1,j+1,i-1+1,j-1+1,i-2+1,j-2+1,i-3+1,j-3+1,i-4+1,j-4+1);
            return 0;
          }
        }
        //type 6 top right check
        if(i-4>=0  && i-4<h && j+4>=0 && j+4<w){
          if(arr[i][j]=='s' && arr[i-1][j+1]=='n' && arr[i-2][j+2]=='u'&& arr[i-3][j+3]=='k' && arr[i-4][j+4]=='e'){
            printf("%d %d\n%d %d\n%d %d\n%d %d\n%d %d\n",i+1,j+1,i-1+1,j+1+1,i-2+1,j+2+1,i-3+1,j+3+1,i-4+1,j+4+1);
            return 0;
          }
        }
        //type 7 bottom left check
        if(i+4>=0  && i+4<h && j-4>=0 && j-4<w){
          if(arr[i][j]=='s' && arr[i+1][j-1]=='n' && arr[i+2][j-2]=='u'&& arr[i+3][j-3]=='k' && arr[i+4][j-4]=='e'){
            printf("%d %d\n%d %d\n%d %d\n%d %d\n%d %d\n",i+1,j+1,i+1+1,j-1+1,i+2+1,j-2+1,i+3+1,j-3+1,i+4+1,j-4+1);
            return 0;
          }
        }
        //type 1 bottom right check
        if(i+4>=0  && i+4<h && j+4>=0 && j+4<w){
          if(arr[i][j]=='s' && arr[i+1][j+1]=='n' && arr[i+2][j+2]=='u'&& arr[i+3][j+3]=='k' && arr[i+4][j+4]=='e'){
            printf("%d %d\n%d %d\n%d %d\n%d %d\n%d %d\n",i+1,j+1,i+1+1,j+1+1,i+2+1,j+2+1,i+3+1,j+3+1,i+4+1,j+4+1);
            return 0;
          }
        }

    }
  }


 return 0;
}