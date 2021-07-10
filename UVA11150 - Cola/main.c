#include <stdio.h>

int main(){
	int N;
	while(scanf("%d\n", &N)!=EOF){
		int total = 0;
		while(N>=3){
			total += 3;
			N = N - 3 + 1;
		}
		if(N == 2) total += 3;
		else if (N == 1) total += 1;
		printf("%d\n", total);
	}
}