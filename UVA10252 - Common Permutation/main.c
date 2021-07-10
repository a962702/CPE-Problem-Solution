#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(){
	char a[1000], b[1000];
	while(scanf("%s %s", a, b)!=EOF){
		int a_count[26] = {0}, b_count[26] = {0};
		for(int i = 0; i < strlen(a); i++){
			if(islower(a[i])) a_count[a[i] - 'a'] += 1;
		}
		for(int i = 0; i < strlen(b); i++){
			if(islower(b[i])) b_count[b[i] - 'a'] += 1;
		}
		for(int i = 0; i < 26; i++){
			while(a_count[i] > 0 && b_count[i] > 0){
				printf("%c", 'a' + i);
				a_count[i] -= 1;
				b_count[i] -= 1;
			}
		}
		printf("\n");
	}
}