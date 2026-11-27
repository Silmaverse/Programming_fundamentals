#include<bits/stdc++.h>
using namespace std;

int main(){
  int n;
  cin>>n;
  map<int,int>boxes;
  int maxcnt=0;
  for (int i = 0;i<n; i++){
    int val;
    cin>>val;
    boxes[val]++;
    maxcnt=max(maxcnt,boxes[val]);
  }
  cout<<maxcnt<<'\n';
  return 0;  
}