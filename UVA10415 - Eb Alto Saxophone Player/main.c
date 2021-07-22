#include <stdio.h>
#include <string.h>

int main(){
	int t;
	scanf("%d", &t);
	while(t--){
		char notes[201];
		int isPressed[11] = {0}, pressCount[11] = {0};
		scanf("%s", notes);
		for(int i = 0; i < strlen(notes); i++){
			switch(notes[i]){
				case 'c':
					isPressed[1] = 0;
					pressCount[2] += isPressed[2] == 0 ? 1 : 0;
					isPressed[2] = 1;
					pressCount[3] += isPressed[3] == 0 ? 1 : 0;
					isPressed[3] = 1;
					pressCount[4] += isPressed[4] == 0 ? 1 : 0;
					isPressed[4] = 1;
					isPressed[5] = 0;
					isPressed[6] = 0;
					pressCount[7] += isPressed[7] == 0 ? 1 : 0;
					isPressed[7] = 1;
					pressCount[8] += isPressed[8] == 0 ? 1 : 0;
					isPressed[8] = 1;
					pressCount[9] += isPressed[9] == 0 ? 1 : 0;
					isPressed[9] = 1;
					pressCount[10] += isPressed[10] == 0 ? 1 : 0;
					isPressed[10] = 1;
					break;
				case 'd':
					isPressed[1] = 0;
					pressCount[2] += isPressed[2] == 0 ? 1 : 0;
					isPressed[2] = 1;
					pressCount[3] += isPressed[3] == 0 ? 1 : 0;
					isPressed[3] = 1;
					pressCount[4] += isPressed[4] == 0 ? 1 : 0;
					isPressed[4] = 1;
					isPressed[5] = 0;
					isPressed[6] = 0;
					pressCount[7] += isPressed[7] == 0 ? 1 : 0;
					isPressed[7] = 1;
					pressCount[8] += isPressed[8] == 0 ? 1 : 0;
					isPressed[8] = 1;
					pressCount[9] += isPressed[9] == 0 ? 1 : 0;
					isPressed[9] = 1;
					isPressed[10] = 0;
					break;
				case 'e':
					isPressed[1] = 0;
					pressCount[2] += isPressed[2] == 0 ? 1 : 0;
					isPressed[2] = 1;
					pressCount[3] += isPressed[3] == 0 ? 1 : 0;
					isPressed[3] = 1;
					pressCount[4] += isPressed[4] == 0 ? 1 : 0;
					isPressed[4] = 1;
					isPressed[5] = 0;
					isPressed[6] = 0;
					pressCount[7] += isPressed[7] == 0 ? 1 : 0;
					isPressed[7] = 1;
					pressCount[8] += isPressed[8] == 0 ? 1 : 0;
					isPressed[8] = 1;
					isPressed[9] = 0;
					isPressed[10] = 0;
					break;
				case 'f':
					isPressed[1] = 0;
					pressCount[2] += isPressed[2] == 0 ? 1 : 0;
					isPressed[2] = 1;
					pressCount[3] += isPressed[3] == 0 ? 1 : 0;
					isPressed[3] = 1;
					pressCount[4] += isPressed[4] == 0 ? 1 : 0;
					isPressed[4] = 1;
					isPressed[5] = 0;
					isPressed[6] = 0;
					pressCount[7] += isPressed[7] == 0 ? 1 : 0;
					isPressed[7] = 1;
					isPressed[8] = 0;
					isPressed[9] = 0;
					isPressed[10] = 0;
					break;
				case 'g':
					isPressed[1] = 0;
					pressCount[2] += isPressed[2] == 0 ? 1 : 0;
					isPressed[2] = 1;
					pressCount[3] += isPressed[3] == 0 ? 1 : 0;
					isPressed[3] = 1;
					pressCount[4] += isPressed[4] == 0 ? 1 : 0;
					isPressed[4] = 1;
					isPressed[5] = 0;
					isPressed[6] = 0;
					isPressed[7] = 0;
					isPressed[8] = 0;
					isPressed[9] = 0;
					isPressed[10] = 0;
					break;
				case 'a':
					isPressed[1] = 0;
					pressCount[2] += isPressed[2] == 0 ? 1 : 0;
					isPressed[2] = 1;
					pressCount[3] += isPressed[3] == 0 ? 1 : 0;
					isPressed[3] = 1;
					isPressed[4] = 0;
					isPressed[5] = 0;
					isPressed[6] = 0;
					isPressed[7] = 0;
					isPressed[8] = 0;
					isPressed[9] = 0;
					isPressed[10] = 0;
					break;
				case 'b':
					isPressed[1] = 0;
					pressCount[2] += isPressed[2] == 0 ? 1 : 0;
					isPressed[2] = 1;
					isPressed[3] = 0;
					isPressed[4] = 0;
					isPressed[5] = 0;
					isPressed[6] = 0;
					isPressed[7] = 0;
					isPressed[8] = 0;
					isPressed[9] = 0;
					isPressed[10] = 0;
					break;
				case 'C':
					isPressed[1] = 0;
					isPressed[2] = 0;
					pressCount[3] += isPressed[3] == 0 ? 1 : 0;
					isPressed[3] = 1;
					isPressed[4] = 0;
					isPressed[5] = 0;
					isPressed[6] = 0;
					isPressed[7] = 0;
					isPressed[8] = 0;
					isPressed[9] = 0;
					isPressed[10] = 0;
					break;
				case 'D':
					pressCount[1] += isPressed[1] == 0 ? 1 : 0;
					isPressed[1] = 1;
					pressCount[2] += isPressed[2] == 0 ? 1 : 0;
					isPressed[2] = 1;
					pressCount[3] += isPressed[3] == 0 ? 1 : 0;
					isPressed[3] = 1;
					pressCount[4] += isPressed[4] == 0 ? 1 : 0;
					isPressed[4] = 1;
					isPressed[5] = 0;
					isPressed[6] = 0;
					pressCount[7] += isPressed[7] == 0 ? 1 : 0;
					isPressed[7] = 1;
					pressCount[8] += isPressed[8] == 0 ? 1 : 0;
					isPressed[8] = 1;
					pressCount[9] += isPressed[9] == 0 ? 1 : 0;
					isPressed[9] = 1;
					isPressed[10] = 0;
					break;
				case 'E':
					pressCount[1] += isPressed[1] == 0 ? 1 : 0;
					isPressed[1] = 1;
					pressCount[2] += isPressed[2] == 0 ? 1 : 0;
					isPressed[2] = 1;
					pressCount[3] += isPressed[3] == 0 ? 1 : 0;
					isPressed[3] = 1;
					pressCount[4] += isPressed[4] == 0 ? 1 : 0;
					isPressed[4] = 1;
					isPressed[5] = 0;
					isPressed[6] = 0;
					pressCount[7] += isPressed[7] == 0 ? 1 : 0;
					isPressed[7] = 1;
					pressCount[8] += isPressed[8] == 0 ? 1 : 0;
					isPressed[8] = 1;
					isPressed[9] = 0;
					isPressed[10] = 0;
					break;
				case 'F':
					pressCount[1] += isPressed[1] == 0 ? 1 : 0;
					isPressed[1] = 1;
					pressCount[2] += isPressed[2] == 0 ? 1 : 0;
					isPressed[2] = 1;
					pressCount[3] += isPressed[3] == 0 ? 1 : 0;
					isPressed[3] = 1;
					pressCount[4] += isPressed[4] == 0 ? 1 : 0;
					isPressed[4] = 1;
					isPressed[5] = 0;
					isPressed[6] = 0;
					pressCount[7] += isPressed[7] == 0 ? 1 : 0;
					isPressed[7] = 1;
					isPressed[8] = 0;
					isPressed[9] = 0;
					isPressed[10] = 0;
					break;
				case 'G':
					pressCount[1] += isPressed[1] == 0 ? 1 : 0;
					isPressed[1] = 1;
					pressCount[2] += isPressed[2] == 0 ? 1 : 0;
					isPressed[2] = 1;
					pressCount[3] += isPressed[3] == 0 ? 1 : 0;
					isPressed[3] = 1;
					pressCount[4] += isPressed[4] == 0 ? 1 : 0;
					isPressed[4] = 1;
					isPressed[5] = 0;
					isPressed[6] = 0;
					isPressed[7] = 0;
					isPressed[8] = 0;
					isPressed[9] = 0;
					isPressed[10] = 0;
					break;
				case 'A':
					pressCount[1] += isPressed[1] == 0 ? 1 : 0;
					isPressed[1] = 1;
					pressCount[2] += isPressed[2] == 0 ? 1 : 0;
					isPressed[2] = 1;
					pressCount[3] += isPressed[3] == 0 ? 1 : 0;
					isPressed[3] = 1;
					isPressed[4] = 0;
					isPressed[5] = 0;
					isPressed[6] = 0;
					isPressed[7] = 0;
					isPressed[8] = 0;
					isPressed[9] = 0;
					isPressed[10] = 0;
					break;
				case 'B':
					pressCount[1] += isPressed[1] == 0 ? 1 : 0;
					isPressed[1] = 1;
					pressCount[2] += isPressed[2] == 0 ? 1 : 0;
					isPressed[2] = 1;
					isPressed[3] = 0;
					isPressed[4] = 0;
					isPressed[5] = 0;
					isPressed[6] = 0;
					isPressed[7] = 0;
					isPressed[8] = 0;
					isPressed[9] = 0;
					isPressed[10] = 0;
					break;
			}
		}
		printf("%d %d %d %d %d %d %d %d %d %d\n", pressCount[1], pressCount[2], pressCount[3], pressCount[4], pressCount[5], pressCount[6], pressCount[7], pressCount[8], pressCount[9], pressCount[10]);
	}
}