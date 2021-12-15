#include <stdio.h>

int main(){
	long long int arr[51] = {0, 1, 2}, i;
	for(i = 3; i <= 50; i++)
		arr[i] = arr[i - 1] + arr[i - 2];
	while(scanf("%lld", &i)!=EOF && i != 0)
		printf("%lld\n", arr[i]);
}