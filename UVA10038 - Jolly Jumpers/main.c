#include <stdio.h>
#include <stdlib.h>

int main(){
	int n;
	while(scanf("%d", &n)!=EOF){
		int i1, i2, orig_n = n, num[3000] = {0};
		scanf("%d", &i1);
		while(--n){
			scanf("%d", &i2);
			num[abs(i1 - i2)] += 1;
			i1 = i2;
		}
		int isJolly = 1;
		for(int i = 1; i < orig_n; i++){
			if(num[i] == 0){
				isJolly = 0;
				break;
			}
		}
		printf("%s\n", isJolly ? "Jolly" : "Not jolly");
	}
}
