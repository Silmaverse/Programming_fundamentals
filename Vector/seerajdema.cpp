#include <bits/stdc++.h>
using namespace std;

int main(){
  int n;
  cin>>n;
  vector<int>v(n);
  for (int i = 0; i <n; i++){
    cin>>v[i];
  }
  int left=0,right=n-1;
  int sereja=0,dima=0;
  bool turn=true;
  while (left<=right){
    if(v[left]>v[right]){
      if(turn)sereja+=v[left];
      else dima+=v[left];
      left++; 
    }
    else{
      if(turn) sereja+=v[right];  
      else dima+=v[right];
      right--;
    }
    turn=!turn;
  }
  cout<< sereja <<" "<< dima<<'\n';
  return 0;  
}