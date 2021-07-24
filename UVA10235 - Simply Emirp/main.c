#include <stdio.h>

int check(int input){
	for(int i = 2; i < input; i++)
		if(input % i == 0)
			return 0;
		return 1;
}

int main(){
	int input;
	while(scanf("%d", &input)!=EOF){
		int tmp = input, rev_input = 0;
		if(check(input) == 0)
			printf("%d is not prime.\n", input);
		else{
			while(tmp > 0){
				rev_input = rev_input * 10 + tmp % 10;
				tmp /= 10;
			}
			if(input != rev_input && check(rev_input))
				printf("%d is emirp.\n", input);
			else
				printf("%d is prime.\n", input);
		}
	}
}