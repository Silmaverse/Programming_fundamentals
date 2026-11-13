#include <bits/stdc++.h>
using namespace std;
#include <vector>

int main(){
  int n;
  cin>>n;
  vector<int> arr;
  for (int i = 0; i <n; i++){
    int val;
    cin>>val;
    arr.push_back(val);
  }
  for (int i = n-1; i>=0; i--){
    cout<<arr[i]<<" ";
  }
  
  
  return 0;  
}