#include <stdio.h>

int main(){
	int a;
	while(scanf("%d", &a)!=EOF){
		int n = 0, ans = 0;
		do{
			n = n * 10 + 1;
			n %= a;
			ans += 1;
		}while(n != 0);
		printf("%d\n", ans);
	}
}