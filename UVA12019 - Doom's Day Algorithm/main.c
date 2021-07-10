#include <stdio.h>

void getAns(int M, int D){
	int m = 1, d = 1, w = 5;
	while(m!=M || d!=D){
		d++;
		if(d > 31 && (m == 1 || m == 3 || m == 5 || m == 7 || m == 8 || m == 10 || m == 12)){
			d = 1;
			m += 1;
		}
		else if (d > 30 && (m == 4 || m == 6 || m == 9 || m == 11)){
			d = 1;
			m += 1;
		}
		else if (d > 28 && m == 2){
			d = 1;
			m += 1;
		}
		w += 1;
		if(w > 6){
			w = 0;
		}
	}
	switch(w){
		case 0:
			printf("Monday\n");
			break;
		case 1:
			printf("Tuesday\n");
			break;
		case 2:
			printf("Wednesday\n");
			break;
		case 3:
			printf("Thursday\n");
			break;
		case 4:
			printf("Friday\n");
			break;
		case 5:
			printf("Saturday\n");
			break;
		case 6:
			printf("Sunday\n");
			break;
	}
}

int main(){
	int testc;
	scanf("%d\n", &testc);
	while(testc>0){
		testc--;
		int M, D;
		scanf("%d %d\n", &M, &D);
		getAns(M, D);
	}
}