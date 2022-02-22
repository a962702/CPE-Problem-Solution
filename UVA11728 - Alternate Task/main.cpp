#include <iostream>
using namespace std;

int calc(int in){
	int ans = 0;
	for(int i = 1; i <= in; i++)
		if(in % i == 0)
			ans += i;
	return ans;
}

int main(){
	int T = 1, in;
	while(cin >> in && in){
		bool flag = false;
		for(int i = in; i >= 0 && !flag; i--){
			if(calc(i) == in){
				cout << "Case " << T++ << ": " << i << endl;
				flag = true;
			}
		}
		if(!flag)
			cout << "Case " << T++ << ": -1" << endl;
	}
}