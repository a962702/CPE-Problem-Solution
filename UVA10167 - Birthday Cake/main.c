#include <stdio.h>

int main(){
	int cherry[100][2], N, fin, A, B, i, nc, c;
	while(1){
		scanf("%d", &N);
		if(!N) break;
		for(i = 0; i < 2 * N; i++)
			scanf("%d %d", &cherry[i][0], &cherry[i][1]);
		fin = 0;
		for(A = -500; A <= 500 && !fin; A++){
			for(B = -500; B <= 500 && !fin; B++){
				fin = 1;
				nc = 0;
				c = 0;
				for(i = 0; i < 2 * N && fin; i++){
					if(A * cherry[i][0] + B * cherry[i][1] == 0)
						fin = 0;
					else{
						if(A * cherry[i][0] + B * cherry[i][1] < 0)
							nc++;
						else
							c++;
					}
				}
				if(nc != c)
					fin = 0;
			}
		}
		printf("%d %d\n", A - 1, B - 1);
	}
}