#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
	char num[1001];
	while(scanf("%s\n", &num)!=EOF){
		if(num[0] == '0') break;
		bool toggle = false;
		int sum1 = 0, sum2 = 0;
		for(int i = 0; i < strlen(num); i++){
			if(toggle){
				sum1 += num[i] - '0';
				toggle = false;
			}
			else{
				sum2 += num[i] - '0';
				toggle = true;
			}
		}
		if(abs(sum1 - sum2)%11 == 0){
			printf("%s is a multiple of 11.\n", num);
		}
		else{
			printf("%s is not a multiple of 11.\n", num);
		}
	}
}