#include <stdio.h>
#include <string.h>

int main(){
	int detect = 0;
	char input[1001];
	while(fgets(input, 1000, stdin)!=NULL){
		for(int i = 0; i < strlen(input); i++){
			if(input[i] == '"')
				if(detect == 0){
					detect = 1;
					printf("``");
				}
				else {
					detect = 0;
					printf("''");
				}
			else
				printf("%c", input[i]);
		}
	}
}