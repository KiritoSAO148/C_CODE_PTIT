#include <stdio.h>

int check (int n){
	int m=n;
	int ans=0;
	while (n){
		int res=1;
		int d=n%10;
		for (int i=1; i<=d; i++) res*=i;
		ans+=res;
		n/=10;
	}
	if (ans==m) return 1;
	else return 0;
}

int main(){
	int a,b;
	scanf("%d %d", &a, &b);
	if (a>b){
		int tmp=a;
		a=b;
		b=tmp;
	}
	for (int i=a; i<=b; i++){
		if (check(i)) printf("%d ", i);
	}
	return 0;
}
