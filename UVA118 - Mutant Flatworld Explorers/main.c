#include <stdio.h>
#include <string.h>

int main(){
	int world_x, world_y;
	scanf("%d %d", &world_x, &world_y);
	int current_x, current_y, scent[51][51] = {0};
	char orientation;
	while(scanf("%d %d %c", &current_x, &current_y, &orientation)!=EOF){
		int EndOfBound = 0;
		char command[100];
		scanf("%s\n", command);
		for(int i = 0; i < strlen(command) && EndOfBound == 0; i++){
			switch(command[i]){
				case 'L':
					if(orientation == 'N')
						orientation = 'W';
					else if (orientation == 'E')
						orientation = 'N';
					else if (orientation == 'S')
						orientation = 'E';
					else
						orientation = 'S';
					break;
				case 'R':
					if(orientation == 'N')
						orientation = 'E';
					else if (orientation == 'E')
						orientation = 'S';
					else if (orientation == 'S')
						orientation = 'W';
					else
						orientation = 'N';
					break;
				case 'F':
					int next_x = current_x, next_y = current_y;
					if(orientation == 'N')
						next_y = current_y + 1;
					else if (orientation == 'E')
						next_x = current_x + 1;
					else if (orientation == 'S')
						next_y = current_y - 1;
					else
						next_x = current_x - 1;
					
					// Check Out of Bound
					if(next_x < 0 || next_x > world_x || next_y < 0 || next_y > world_y){
						if(scent[current_x][current_y] == 1)
							break;
						scent[current_x][current_y] = 1;
						EndOfBound = 1;
					}else{
						current_x = next_x;
						current_y = next_y;
					}
					break;
			}
		}
		if(EndOfBound == 1)
			printf("%d %d %c LOST\n", current_x, current_y, orientation);
		else
			printf("%d %d %c\n", current_x, current_y, orientation);
	}
}