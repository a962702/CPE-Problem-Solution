#include <stdio.h>

int main(){
	int M;
	while(scanf("%d\n", &M)!=EOF){
		bool used = false;
		while(M--){
			if(used) printf("\n");
			int n, m;
			scanf("%d %d\n", &n, &m);
			char str[m][n + 2];
			int str_value[m];
			int orig_m = m;
			while(m--){
				str_value[m] = 0;
				fgets(str[m], n + 2, stdin);
				for(int i = 0; i < n; i++){
					for(int j = i + 1; j < n; j++){
						if(str[m][i]>str[m][j]) str_value[m]++;
					}
				}
			}
			while(1){
				int min = str_value[0];
				for(int i = 1; i < orig_m; i++){
					min = (str_value[i] < min) ? str_value[i] : min;
				}
				if(min == 99999) break;
				for(int i = orig_m - 1; i >= 0; i--){
					if(str_value[i] == min){
						for(int k = 0; k < n; k++){
							printf("%c", str[i][k]);
						}
						printf("\n");
						str_value[i] = 99999;
					}
				}
			}
			used = true;
		}
	}
}
