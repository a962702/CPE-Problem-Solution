#include <iostream>
#include <cmath>
using namespace std;

int main(){
	int T;
	cin >> T;
	while(T--){
	 	int n, i, tmp, max, diff = -1000000;
		cin >> n;
		cin >> max;
		for(i = 1; i < n; i++){
			cin >> tmp;
			if(max - tmp > diff)
				diff = max - tmp;
			if(tmp > max)
				max = tmp;
		}
		cout << diff << endl;
	}
}