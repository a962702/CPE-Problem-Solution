#include <stdio.h>

int main(){
	// Save all square numbers to array
	int arr[1000];
	for(int i = 0; ; i++){
		arr[i] = i * i;
		if(arr[i] > 100000) break;
	}

	// Main program
	int a, b;
	while(scanf("%d %d", &a, &b)!=EOF){
		if(a == 0 && b == 0) break;
		int i = 0, ans = 0;
		while(arr[i] < a) i++;
		while(arr[i++] <= b) ans++;
		printf("%d\n", ans);
	}
}