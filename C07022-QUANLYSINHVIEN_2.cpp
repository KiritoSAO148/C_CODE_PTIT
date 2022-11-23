#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

struct sv{
	int id;
	char ten[50];
	float a,b,c;
};

typedef struct sv sv;

sv nhap(int ma){
	sv x;
	x.id=ma;
	getchar();
	gets(x.ten);
	scanf("%f %f %f", &x.a, &x.b, &x.c);
	return x;
}

void in(sv x){
	printf("%d %s %.1f %.1f %.1f\n", x.id, x.ten, x.a, x.b, x.c);
}

float tong(sv x){
	return x.a+x.b+x.c;
}

int check (sv x){
	if (x.a<=x.b && x.b<=x.c) return 1;
	return 0;
}

int main(){
	sv a[50];
	int n=0, cnt=0, sua[50];
	while (1){
		int lc; scanf("%d", &lc);
		if (lc==1){
			int x; scanf("%d", &x);
			for (int i=0; i<x; i++){
				a[n]=nhap(n+1);
				++n;
			}
		}
		else if (lc==2){
			int ma; scanf("%d", &ma);
			sua[cnt]=ma;
			++cnt;
			sv x = nhap(ma);
			a[ma-1]=x;
		}
		else if(lc==3){
			printf("%d\n", n);
			for (int i=0; i<cnt; i++) printf("%d ", sua[i]);
			printf("\n");
			for (int i=0; i<n; i++){
				if (check(a[i])) in(a[i]);
			}
			break;
		}
	}
}
