#include <stdio.h>

char getAns(char field[100][100], int size_x, int size_y, int x, int y){
	if(field[x][y] == '*')
		return '*';
	int ans = 0;
	for(int i = x - 1; i <= x + 1; i++){
		for(int j = y - 1; j <= y + 1; j++){
			if(i == x && j == y)
				continue;
			if(i >=0 && i < size_x && j >= 0 && j < size_y)
				ans += field[i][j] == '*' ? 1 : 0;
		}
	}
	return ans + '0';
}

int main(){
	int FieldCount = 1, size_x, size_y;
	while(scanf("%d %d\n", &size_x, &size_y)!=EOF){
		if(size_x == 0 && size_y == 0)
			break;
		if(FieldCount > 1)
			printf("\n");
		printf("Field #%d:\n", FieldCount++);
		char field[100][100];
		for(int i = 0; i < size_x; i++){
			for(int j = 0; j < size_y; j++){
				scanf("%c", &field[i][j]);
			}
			fgetc(stdin);
		}
		for(int i = 0; i < size_x; i++){
			for(int j = 0; j < size_y; j++){
				field[i][j] = getAns(field, size_x, size_y, i, j);
			}
		}
		for(int i = 0; i < size_x; i++){
			for(int j = 0; j < size_y; j++){
				printf("%c", field[i][j]);
			}
			printf("\n");
		}
	}
}