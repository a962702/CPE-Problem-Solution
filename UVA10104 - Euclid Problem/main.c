#include <stdio.h>

int main(){
	long long int A, B;
	while(scanf("%lld %lld", &A, &B)!=EOF){
		long long int old_X = 1, X = 0, old_Y = 0, Y = 1, d, tmp;
		while(B != 0){
			d = A / B;

			// Normal
			tmp = A;
			A = B;
			B = tmp - d * B;

			// X
			tmp = old_X;
			old_X = X;
			X = tmp - d * X;

			// Y
			tmp = old_Y;
			old_Y = Y;
			Y = tmp - d * Y;
		}
		printf("%lld %lld %lld\n", old_X, old_Y, A);
	}
}