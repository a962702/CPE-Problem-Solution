#include <stdio.h>

int main(){
	unsigned long long a, b;
	while(scanf("%llu %llu\n", &a, &b)!=EOF){
		printf("%llu\n", a > b ? a - b : b - a);
	}
}