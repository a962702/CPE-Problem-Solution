#include <stdio.h>

int main(){
	long long int S, D;
	while(scanf("%lld %lld", &S, &D)!=EOF){
		long long int d = 1;
		while(d <= D){
			d += S;
			S += 1;
		}
		printf("%lld\n", S - 1);
	}
}
