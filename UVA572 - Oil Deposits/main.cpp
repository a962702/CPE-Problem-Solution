#include <iostream>
using namespace std;

void mark(int (*map)[100], int m, int n, int x, int y){
	map[x][y] = 0;
	for(int i = x - 1; i <= x + 1; i++){
		for(int j = y - 1; j <= y + 1; j++){
			if(i >= 0 && i < m && j >= 0 && j < n && map[i][j] == 1)
				mark(map, m, n, i, j);
		}
	}
}

int main(){
	int m, n;
	while(cin >> m >> n){
		if(m == 0 && n == 0) break;
		int map[100][100] = {0}, ans = 0;
		for(int i = 0; i < m; i++){
			for(int j = 0; j < n; j++){
				char c;
				cin >> c;
				if(c == '@')
					map[i][j] = 1;
			}
			getchar();
		}
		for(int i = 0; i < m; i++){
			for(int j = 0; j < n; j++){
				if(map[i][j] == 1){
					ans += 1;
					mark(map, m, n, i, j);
				}
			}
		}
		cout << ans << endl;
	}
}