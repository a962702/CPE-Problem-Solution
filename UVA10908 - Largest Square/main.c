#include <stdio.h>

int check(char grid[100][100], int M, int N, int r, int c, int *ans){
	if(r - *ans < 0 || r + *ans >= M || c - *ans < 0 || c + *ans >= N)
		return 0;
	for(int i = r - *ans; i <= r + *ans; i++){
		for(int j = c - *ans; j <= c + *ans; j++){
			if(grid[i][j] != grid[r][c])
				return 0;
		}
	}
	return 1;
}

int main(){
	int T;
	scanf("%d", &T);
	while(T--){
		int M, N, Q;
		scanf("%d %d %d\n", &M, &N, &Q);
		printf("%d %d %d\n", M, N, Q);
		char grid[100][100];
		for(int i = 0; i < M; i++){
			for(int j = 0; j < N; j++){
				scanf("%c", &grid[i][j]);
			}
			fgetc(stdin);
		}
		while(Q--){
			int r, c, ans = 1;
			scanf("%d %d", &r, &c);
			while(check(grid, M, N, r, c, &ans))
				ans += 1;
			printf("%d\n", (ans - 1) * 2 + 1);
		}
	}
}