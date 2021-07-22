#include <stdio.h>

int main(){
	int T;
	while(scanf("%d", &T)!=EOF){
		if(T == 0) break;
		int top = 1, north = 2, east = 4, south = 5, west = 3, bottom = 6;
		while(T--){
			char command[6];
			scanf("%s", command);
			int tmp = top;
			switch(command[0]){
				case 'n':
					top = south;
					south = bottom;
					bottom = north;
					north = tmp;
					break;
				case 'e':
					top = west;
					west = bottom;
					bottom = east;
					east = tmp;
					break;
				case 's':
					top = north;
					north = bottom;
					bottom = south;
					south = tmp;
					break;
				case 'w':
					top = east;
					east = bottom;
					bottom = west;
					west = tmp;
					break;
			}
		}
		printf("%d\n", top);
	}
}