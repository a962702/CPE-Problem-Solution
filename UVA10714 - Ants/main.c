#include <stdio.h>

int max(int a, int b){
	return a > b ? a : b;
}

int main(){
	int testcase, n, count;
	scanf("%d", &testcase);
	while(testcase--){
		scanf("%d %d", &n, &count);
		int ans1 = 0, ans2 = 0, in;
		while(count--){
			scanf("%d", &in);
			if(in > n / 2){
				ans1 = max(ans1, n - in);
				ans2 = max(ans2, in);
			}
			else{
				ans1 = max(ans1, in);
				ans2 = max(ans2, n - in);
			}
		}
		printf("%d %d\n", ans1, ans2);
	}
}