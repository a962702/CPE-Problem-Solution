#include <stdio.h>
#include <math.h>

int main(){
	int ans[4][50], count[4] = {0}, n;
	for(int i = 1; i <= 4; i++){
		count[i - 1] = 0;
		int p = round(pow(10, i));
		for(int j = 0; j < p; j++){
			for(int k = 0; k < p; k++){
				if((j + k) * (j + k) == j * p + k){
					ans[i - 1][count[i - 1]++] = j * p + k;
				}
			}
		}
	}
	while(scanf("%d", &n)!=EOF){
		for(int i = 0; i < count[n / 2 - 1]; i++){
			printf("%0*d\n", n, ans[n / 2 - 1][i]);
		}
	}
}