#include <iostream>
using namespace std;

int main(){
	int t, N;
	cin >> t;
	while(t--){
		cin >> N;
		if(N == 1){
			cout << 1 << endl;
			continue;
		}
		string ans = "";
		for(int i = 9; i > 1; i--){
			while(N % i == 0){
				ans += i + '0';
				N /= i;
			}
		}
		if(N == 1){
			for(int i =ans.length() - 1; i >= 0; i--)
				cout << ans[i];
			cout << endl;
		}
		else
			cout << -1 << endl;
	}
}