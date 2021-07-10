#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main(){
	int n;
	scanf("%d\n", &n);
	int count[26] = {0};
	while(n>0){
    	n--;
		char str[1000];
        fgets(str, 1000, stdin);
		for(int i = 0; i < strlen(str) - 1; i++){
			if(isalpha(str[i])){
				char s = toupper(str[i]);
				count[s-'A']++;
			}
		}
	}
	while(1){
		int max = 0;
		for(int i = 0; i < 26; i++){
			if(count[i]>max) max = count[i];
		}
		if(max == 0) break;
		for(int i = 0; i < 26; i++){
			if(count[i] == max){
				printf("%c %d\n", i + 'A', count[i]);
				count[i] = 0;
			}
		}
	}
}