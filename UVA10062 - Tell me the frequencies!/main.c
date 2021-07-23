#include <stdio.h>
#include <string.h>

void swap(int *a, int *b){
	int tmp = *a;
	*a = *b;
	*b = tmp;
}

int main(){
	char text[1002];
	int print_newline = 0;
	while(fgets(text, 1001, stdin)!=NULL){
		if(print_newline == 1)
			printf("\n");
		int count[128] = {0};
		for(int i = 0; i < strlen(text) - 1; i++)
			count[text[i]] += 1;
		int ASCII[128];
		for(int i = 0; i < 128; i++)
			ASCII[i] = i;
		for(int i = 0; i < 128; i++){
			for(int j = i + 1; j < 128; j++){
				if(count[i] > count[j]){
					swap(&ASCII[i], &ASCII[j]);
					swap(&count[i], &count[j]);
				}
				else if(count[i] == count[j]){
					if(ASCII[i] < ASCII[j]){
						swap(&ASCII[i], &ASCII[j]);
						swap(&count[i], &count[j]);
					}
				}
			}
		}
		for(int i = 0; i < 128; i++){
			if(count[i] == 0)
				continue;
			printf("%d %d\n", ASCII[i], count[i]);
		}
		print_newline = 1;
	}
}