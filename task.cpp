#include <bits/stdc++.h>
using namespace std;

int arr[200001];
int idx[1000001];
long long ans[200001];

int main() {

    int n;
    scanf("%d",&n);

    for(int i=1;i<=n;i++){
        scanf("%d",&arr[i]);
        idx[arr[i]] = i;
    }

    sort(arr+1, arr+n+1, greater<int>());

    long long sum = 0;

    for(int i=1;i<=n;i++){
        ans[idx[arr[i]]] = sum;
        sum += arr[i];
    }

    for(int i=1;i<=n;i++){
        printf("%lld ",ans[i]);
    }
}