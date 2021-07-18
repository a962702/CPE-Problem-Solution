#include <stdio.h>
#include <stdlib.h>

int main(){
	int testc;
	scanf("%d\n", &testc);
	while(testc--){
		int r, s[500];
		scanf("%d", &r);
		int orig_r = r;
		while(r--){
			scanf("%d", &s[r]);
		}
		for(int i = 0; i < orig_r; i++){
			for(int j = i + 1; j < orig_r; j++){
				if(s[i] > s[j]){
					int tmp = s[i];
					s[i] = s[j];
					s[j] = tmp;
				}
			}
		}
		r = orig_r;
		int ans = 0;
		while(r--){
			ans += abs(s[orig_r/2] - s[r]);
		}
		printf("%d\n", ans);
	}
}