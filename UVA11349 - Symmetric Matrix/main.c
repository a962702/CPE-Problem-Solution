#include <stdio.h>

int main(){
	int testn, testcount = 1;
	scanf("%d", &testn);
	while(testn--){
		int N, ans = 1;
		scanf("\nN = %d\n", &N);
		int M[100][100];
		for(int i = 0; i < N; i++){
			for(int j = 0; j < N; j++){
				scanf("%d", &M[i][j]);
				if(M[i][j] < 0)
					ans = 0;
			}
		}
		for(int i = 0; i < N && ans; i++){
			for(int j = 0; j <= i && ans; j++){
				if(M[i][j] != M[N - i - 1][N - j - 1])
					ans = 0;
			}
		}
		if(ans)
			printf("Test #%d: Symmetric.\n", testcount++);
		else
			printf("Test #%d: Non-symmetric.\n", testcount++);
	}
}