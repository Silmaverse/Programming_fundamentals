#include <bits/stdc++.h>
using namespace std;

int main(){
  int cel,unf;
  cin>>cel>>unf;
  vector<pair<long long,string>>spend;
  map<string,long long>celfr;
  while (cel--){
    string name;
    int cost;
    cin>>name>>cost;
    celfr[name]+=cost;
  }
  for (auto p :celfr){
    pair<long long ,string> np=make_pair(p.second,p.first);
    spend.push_back(np);
  }
  sort(spend.begin(),spend.end());
  long long savings=0;
  while (spend.size() && unf){
    savings+=spend.back().first;
    spend.pop_back();
    unf--;
  }
  cout<<savings<<'\n';
  return 0;  
}