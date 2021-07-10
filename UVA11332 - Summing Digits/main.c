#include <stdio.h>
#include <string.h>

int main(){
	char num[12];
	while(fgets(num, 12, stdin)!=NULL){
		if(num[0] == '0') break;
		int ans = 0;
		for(int i = 0; i < strlen(num) - 1; i++){
			ans += num[i] - '0';
		}
		while(ans > 9){
			int tmp = 0;
			while(ans > 0){
				tmp += ans % 10;
				ans /= 10;
			}
			ans = tmp;
		}
		printf("%d\n", ans);
	}
}