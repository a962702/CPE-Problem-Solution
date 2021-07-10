#include <stdio.h>

int alg(int n){
	int count = 1;
	while(n!=1){
		if(n%2) n = 3 * n + 1;
		else n = n / 2;
		count++;
	}
	return count;
}

int main(){
	int i, j;
	while(scanf("%d %d", &i, &j)!=EOF){
		printf("%d %d", i, j);
		if(i > j){
			int tmp = i;
			i = j;
			j = tmp;
		}
		int ans = 0;
		do{
			int tmp = alg(i);
			ans = (tmp > ans)?tmp:ans;
		}while(++i<=j);
		printf(" %d\n", ans);
	}
}