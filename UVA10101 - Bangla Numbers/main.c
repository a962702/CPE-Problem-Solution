#include <stdio.h>
#include <string.h>

int main(){
	char input[20];
	int testcase = 1;
	while(scanf("%s", &input)!=EOF){
		printf("%4d.", testcase++);
		int len = strlen(input);
		int tmp_ans = 0, len_ans = 0;
		for(int i = 0; i < len; i++){
			if(tmp_ans != 0){
				if((len - i) % 7 == 2){
					printf(" %d shata", tmp_ans);
					tmp_ans = 0;
				}
				if((len - i) % 7 == 3){
					printf(" %d hajar", tmp_ans);
					tmp_ans = 0;
				}
				if((len - i) % 7 == 5){
					printf(" %d lakh", tmp_ans);
					tmp_ans = 0;
				}
			}
			if(i > 0 && (len - i) % 7 == 0){
				if(tmp_ans != 0){
					printf(" %d", tmp_ans);
					tmp_ans = 0;
				}
				printf(" kuti");
			}
			tmp_ans = tmp_ans * 10 + input[i] - '0';
		}
		if(len == 1 || tmp_ans != 0)
			printf(" %d", tmp_ans);
		printf("\n");
	}
}