#include <stdio.h>
#include <stdbool.h>

int main(){
	int caseid = 1, N;
	while(scanf("%d", &N)!=EOF){	
		int b[100];
		bool set[20001] = {true}, ans = true;
		for(int i = 0; i < N; i++){
			scanf("%d", &b[i]);
			if(i > 0)
				if(set[b[i] - b[i - 1]] == true)
					ans = false;
				else
					set[b[i] - b[i - 1]] = true;
		}
		if(ans)
			printf("Case #%d: It is a B2-Sequence.\n\n", caseid++);
		else
			printf("Case #%d: It is not a B2-Sequence.\n\n", caseid++);
	}
}