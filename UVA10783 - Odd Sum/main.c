#include <stdio.h>

int main(){
	int testc = 0;
	int T;
	scanf("%d\n", &T);
	while(testc < T){
		int a, b;
		scanf("%d %d\n", &a, &b);
		int ans = 0;
		for(int i = a; i <=b; i++){
			if (i % 2) ans += i;
		}
		printf("Case %d: %d\n", ++testc, ans);
	}
}