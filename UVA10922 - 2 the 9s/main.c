#include <stdio.h>

int main(){
	char ch;
	while((ch = fgetc(stdin))!='0'){
		printf("%c", ch);
		int num = ch - '0';
		while((ch = fgetc(stdin))!='\n'){
			printf("%c", ch);
			num += ch - '0';
		}
		if(num % 9 == 0){
			int ans = 1;
			while(num > 9){
				ans += 1;
				int tmp = 0;
				while(num > 0){
					tmp += num % 10;
					num /= 10;
				}
				num = tmp;
			}
			printf(" is a multiple of 9 and has 9-degree %d.\n", ans);
		}
		else
			printf(" is not a multiple of 9.\n");
	}
}