#include <stdio.h>

int main(){
	int n;
	scanf("%d", &n);
	for(int i = 1; i <= n; i++){
		int from_x, from_y, to_x, to_y, ans = 0;
		scanf("%d %d %d %d", &from_x, &from_y, &to_x, &to_y);
		while(from_x != to_x || from_y != to_y){
			ans += 1;
			if(from_y == 0){
				from_y = from_x + 1;
				from_x = 0;
			}	
			else{
				from_x += 1;
				from_y -= 1;
			}
		}
		printf("Case %d: %d\n", i, ans);
	}
}