#include <stdio.h>
#include <string.h>

int main(){
	char input[100][100];
	int linecount = 0, maxlen = 0;
	while(fgets(input[linecount++], 100, stdin)!=NULL){
		if(input[linecount - 1][strlen(input[linecount - 1]) - 1] == '\n')
			input[linecount - 1][strlen(input[linecount - 1]) - 1] = '\0';
		if(maxlen < strlen(input[linecount - 1]))
			maxlen = strlen(input[linecount - 1]);
	}
	for(int i = 0; i < maxlen; i++){
		int OutputLength = 0;
		for(int j = linecount - 1; j >= 0; j--)
			if(strlen(input[j]) > i)
				OutputLength = linecount - 1 - j;
		for(int j = linecount - 1 - 1; j >= linecount - 1 - OutputLength; j--){
			if(strlen(input[j]) <= i)
				printf(" ");
			else
				printf("%c", input[j][i]);
		}
		printf("\n");
	}
}