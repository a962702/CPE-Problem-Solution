#include <stdio.h>
#include <math.h>

int isprime(int in){
	for(int i = 2; i * i <= in; i++)
		if(in % i == 0)
			return 0;
	return 1;
}

int main(){
	int table[10001] = {0};
	for(int i = 0; i <= 10000; i++)
		table[i] = isprime(i * i + i + 41);
	int a, b;
	while(scanf("%d %d", &a, &b)!=EOF){
		int primecount = 0;
		for(int i = a; i <= b; i++){
			primecount += table[i];
		}
		
		printf("%.2f\n", round((double)primecount * 10000 / ((double)b - (double)a + 1)) / 100);
	}
}