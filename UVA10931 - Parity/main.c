#include <stdio.h>

int main(){
	int I;
	while(scanf("%d", &I)!=EOF){
		if (I == 0) break;
		int count = 0, P = 0, B[100];
		while(I > 0){
			P += I % 2;
			B[count++] = I % 2;
			I /= 2;
		}
		printf("The parity of ");
		while(--count >= 0){
			printf("%d", B[count]);
		}
		printf(" is %d (mod 2).\n", P);
	}
}