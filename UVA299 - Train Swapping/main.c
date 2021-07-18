#include <stdio.h>

int main(){
	int N;
	scanf("%d", &N);
	while(N--){
		int S = 0, L;
		scanf("%d", &L);
		int arr[50];
		for(int i = 0; i < L; i++)
			scanf("%d", &arr[i]);
		for(int i = 0; i < L; i++){
			for(int j = i + 1; j < L; j++){
				if(arr[i] > arr[j]){
					int tmp = arr[i];
					arr[i] = arr[j];
					arr[j] = tmp;
					S++;
				}
			}
		}
		printf("Optimal train swapping takes %d swaps.\n", S);
	}
}
