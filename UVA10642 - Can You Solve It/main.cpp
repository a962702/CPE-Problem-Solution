#include <iostream>
using namespace std;

int main(){
	long long n, T, x1, y1, x2, y2;
	while(cin >> n){
		for(T = 1; T <= n; T++){
			cin >> x1 >> y1 >> x2 >> y2;
			cout << "Case " << T << ": " << ((1 + x2 + y2) * (x2 + y2) / 2 + x2) - ((1 + x1 + y1) * (x1 + y1) / 2 + x1) << endl;
		}
	}
}