#include <iostream>
using namespace std;

int main(){
	int tc, num[16];
	cin >> tc;
	while(tc--){
		for(int i = 0; i < 16; i++)
			scanf("%1d", &num[i]);
		int sum1 = 0, sum2 = 0;
		for(int i = 0; i < 16; i += 2){
			int tmp = num[i] * 2;
			while(tmp > 0){
				sum1 += tmp % 10;
				tmp /= 10;
			}
		}
		for(int i = 1; i < 16; i += 2)
			sum2 += num[i];
		if((sum1 + sum2) % 10 == 0)
			cout << "Valid" << endl;
		else
			cout << "Invalid" << endl;
	}
}