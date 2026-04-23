#include <stdio.h>
#include <math.h>

int main() {
	// your code goes here
	int x,t;
	scanf("%d",&t);
	while (t--){
		scanf("%d",&x);
		double single_commision=(20*x)/100.0;
		int sell=ceil(100.0/single_commision);
		printf("%d\n",sell);
	}

    return 0;
}
