#include <iostream>
#include <iomanip>
using namespace std;

int check(int a, int b){
	int i, used[10] = {0};
	if(a < 10000)
		used[0]++;
	if(b < 10000)
		used[0]++;
	while(a){
		used[a % 10]++;
		a /= 10;
	}
	while(b){
		used[b % 10]++;
		b /= 10;
	}
	for(i = 0; i < 10; i++)
		if(!(used[i] == 1))
			return 0;
	return 1;
}

int main(){
	int N, i, found, again = 0;
	while(cin >> N && N){
		if(again)
			cout << endl;
		found = 0;
		for(i = 1234; i * N < 98765; i++){
			if(check(i, i * N)){
				cout << i * N << " / " << setw(5) << setfill('0') << i << " = " << N << endl;
				found = 1;
			}
		}
		if(!found)
			cout << "There are no solutions for " << N << "." << endl;
		again = 1;
	}
}