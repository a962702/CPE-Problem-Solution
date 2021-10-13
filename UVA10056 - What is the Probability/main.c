#include <stdio.h>

int main(){
	int S;
	scanf("%d\n", &S);
	while(S--){
		int N, I, count = 0;
		double p, oans = 0, ans = 0;
		scanf("%d %lf %d\n", &N, &p, &I);
		do{
			oans = ans;
			count+=1;
			double probability = 1;
			for(int i = 0; i < count; i++){
				for(int j = 0; j < N; j++){
					if(i == count - 1 && j == I - 1){
						probability *= p;
						break;
					}
					else{
						probability *= (1-p);
					}
				}
			}
			ans += probability;
		}while(oans != ans);
		printf("%.4f\n", ans);
	}
}