#include <stdio.h>
#include <string.h>

int main(){
	int n;
	scanf("%d\n", &n);
	char name[2000][100];
	int count[2000] = {0}, list_size = 0;
	while(n--){
		char in1[100], in2[100], in3[100];
		scanf("%s %s %s\n", in1, in2, in3);
		int isFound = 0;
		for(int i = 0; i < list_size; i++){
			if(!strcmp(in1, name[i])){
				count[i] += 1;
				isFound = 1;
			}
		}
		if(isFound == 0){
			strcpy(name[list_size], in1);
			count[list_size] = 1;
			list_size += 1;
		}
	}
	for(int i = 0; i < list_size; i++){
		for(int j = i + 1; j < list_size; j++){
			if(strcmp(name[i], name[j])> 0){
				char tmp_char[100];
				strcpy(tmp_char, name[i]);
				strcpy(name[i], name[j]);
				strcpy(name[j], tmp_char);
				int tmp_int = count[i];
				count[i] = count[j];
				count[j] = tmp_int;
			}
		}
	}
	for(int i = 0; i < list_size; i++){
		printf("%s %d\n", name[i], count[i]);
	}
}