#include <iostream>
using namespace std;

int main(){
	int J, R;
	while(cin >> J >> R && J && R){
		int i, j, k, winner, point[500] = {0};
		for(i = 0; i < R; i++){
			for(j = 0; j < J; j++){
				cin >> k;
				point[j] += k;
			}
		}
		k = 0;
		for(i = 0; i < J; i++)
			if(point[i] >= k){
				winner = i + 1;
				k = point[i];
			}
		cout << winner << endl;
	}
}