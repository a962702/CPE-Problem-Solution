#include <iostream>
using namespace std;

int main(){
	long long int S, D;
	while(cin >> S >> D){
		long long int d = 1;
		while(d <= D){
			d += S;
			S += 1;
		}
		cout << S - 1 << endl;
	}
}
