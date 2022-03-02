#include <iostream>
#include <cstring>
using namespace std;

int main(){
	char letters[] = {"-01ABCDEFGHIJKLMNOPQRSTUVWXYZ"}, number[] = {"-0122233344455566677778889999"}, input[31];
	while(cin >> input){
		for(int i = 0; i < strlen(input); i++)
			cout << number[strchr(letters,input[i]) - letters];
		cout << endl;
	}
}