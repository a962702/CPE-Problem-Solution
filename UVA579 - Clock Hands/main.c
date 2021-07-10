#include <stdio.h>

int main(){
	float H, M;
	while(scanf("%f:%f\n", &H, &M)!=EOF){
		if(H == 0.0 && M == 0.0) break;
		float ans = H * 30.0  + M * 0.5 - M * 6.0;
		if(ans<0) ans += 360.0;
		if(ans>=180.0) ans = 360.0 - ans;
		printf("%.3f\n", ans);
	}
}
