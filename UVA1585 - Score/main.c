#include <stdio.h>
#include <string.h>

int main(){
	int T;
	while(scanf("%d\n", &T)!=EOF){
		while(T--){
			char s[100];
			int score = 0;
			int add = 1;
			scanf("%s", &s);
			for(int i = 0; i < strlen(s); i++){
				if(s[i] == 'O'){
					score += add;
					add += 1;
				}
				else {
					add = 1;
				}
			}
			printf("%d\n", score);
		}
	}
}