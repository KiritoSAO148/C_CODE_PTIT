#include <stdio.h>

int main(){
	int n; scanf("%d", &n);
	for (int i=1; i<=2*n; i+=2){
		for (int j=1; j<=i; j+=2){
			printf("%c", 63+j);
		}
		for (int j=i-2; j>=1; j-=2){
			printf("%c", 63+j);
		}
		printf("\n");
	}
	return 0;
}
