#include <stdio.h>
#include <stdlib.h>

int main(){
	int Testcase;
	while(scanf("%d", &Testcase)!=EOF){
		while(Testcase--){
			int a, b;
			scanf("%d %d", &a, &b);
			int ans1 = (a + b) / 2;
			int ans2 = a - ans1;
			if(ans2 < 0 || abs(ans1 - ans2) != b) printf("impossible\n");
			else printf("%d %d\n", ans1 > ans2 ? ans1 : ans2, ans1 < ans2 ? ans1 : ans2);
		}
	}
}