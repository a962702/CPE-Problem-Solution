#include <stdio.h>
#include <stdlib.h>

int M;

int compare (const void *x, const void *y){
	int a = *(int*)x;
	int b = *(int*)y;
	if(a % M != b % M) // More than or less than
		return a % M < b % M ? -1 : 1;
	else{ // a equal to b
		if(abs(a % 2) != abs(b % 2)) // a is odd and b is even, and vice versa
			return abs(a % 2) == 1 ? -1 : 1;
		else if(a % 2 == 0) // a and b are even
			return a < b ? -1 : 1;
		else // a and b are odd
			return a > b ? -1 : 1;
	}
}

int main(){
	int N;
	while(scanf("%d %d", &N, &M)!=EOF){
		printf("%d %d\n", N, M);
		if(N == 0 && M == 0) break;
		int arr[10001];
		for(int i = 0; i < N; i++){
			scanf("%d", &arr[i]);
		}
		qsort (arr, N, sizeof(int), compare);
		for(int i = 0; i < N; i++){
			printf("%d\n", arr[i]);
		}
	}
}
