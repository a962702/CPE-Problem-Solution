#include <stdio.h>
#include <stdbool.h>

int main(){
	int caseid = 1, N;
	while(scanf("%d", &N)!=EOF){	
		int b[100];
		bool set[20001] = {false}, ans = true;
		for(int i = 0; i < N; i++)
			scanf("%d", &b[i]);
		for(int i = 0; i < N && ans; i++){
			for(int j = i; j < N && ans; j++){
				if(b[i] > b[j] || b[i] < 1 || b[j] < 1 || set[b[i] + b[j]])
					ans = false;
				else
					set[b[i] + b[j]] = true;
			}
		}
		if(ans)
			printf("Case #%d: It is a B2-Sequence.\n\n", caseid++);
		else
			printf("Case #%d: It is not a B2-Sequence.\n\n", caseid++);
	}
}