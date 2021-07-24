#include <stdio.h>

int main(){
	int a[1000], m;
	while(scanf("%d %d", &a[0], &m)!=EOF){
		int count;
		for(count = 0; a[count] % m == 0; count++){
			if(a[count] == a[count - 1]){
				a[count] = 0;
				break;
			}
			a[count + 1] = a[count] / m;
		}
		if(a[count] != 1)
			printf("Boring!\n");
		else{
			for(int i = 0; i <= count; i++){
				if(i != 0)
					printf(" ");
				printf("%d", a[i]);
			}
			printf("\n");
		}
	}
}