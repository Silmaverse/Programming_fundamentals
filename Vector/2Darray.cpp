#include <bits/stdc++.h>
using namespace std;

int main(){
  vector<vector<int>> hourglass(6,vector<int>(6));
  for (int i = 0; i < 6; i++){
    for (int j = 0; j < 6; j++){
        cin>>hourglass[i][j];
    }
  }
  int maxsum=INT32_MIN;
  for (int i = 0; i <4; i++){
    for (int j = 0; j <4; j++){
       int sum=hourglass[i][j]+hourglass[i][j+1]+hourglass[i][j+2]
       +hourglass[i+1][j+1]+hourglass[i+2][j]+hourglass[i+2][j+1]+hourglass[i+2][j+2]; 
       maxsum=max(sum,maxsum);
    }
  }
  
  cout<<maxsum<<'\n';  
  return 0;   
}