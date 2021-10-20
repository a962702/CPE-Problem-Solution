#include <iostream>
using namespace std;

int main(){
	int N;
	cin >> N;
	while(N--){
		int L, ans = 0;
		cin >> L;
		int train[50];
		for(int i = 0; i < L; i++)
			cin >> train[i];
		for(int i = 0; i < L - 1; i++){
			for(int j = i + 1; j < L; j++){
				if(train[i] > train[j]){
					ans += 1;
					int tmp = train[i];
					train[i] = train[j];
					train[j] = tmp;
				}
			}
		}
		cout << "Optimal train swapping takes " << ans << " swaps." << endl;
	}
}