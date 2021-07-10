#include <stdio.h>

int GCD(int i, int j){
	while(i!=0 && j!=0){
		while(i >= j){
			i -= j;
		}
		while(j >= i && i!=0){
			j -= i;
		}
	}
	return i+j;
}

int main(){
	int N;
	while(scanf("%d\n", &N)!=EOF){
		if(N == 0) break;
		int G = 0;
		for(int i = 1; i < N; i++){
			for(int j = i + 1; j <= N; j++){
				G += GCD(i, j);
			}
		}
		printf("%d\n", G);
	}
}
