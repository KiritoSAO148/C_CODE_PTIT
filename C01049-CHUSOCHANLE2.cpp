#include <stdio.h>

int main(){
	int t;
	scanf("%d", &t);
	while (t--){
		int n;
		scanf("%d", &n);
		int cnt1=0, cnt2=0;
		while(n){
			int d=n%10;
			if (d%2!=0) ++cnt1;
			else ++cnt2;
			n/=10;
		}
		printf("%d %d", cnt1, cnt2);
		printf("\n");
	}
	return 0;
}
