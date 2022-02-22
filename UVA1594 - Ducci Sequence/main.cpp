#include <iostream>
using namespace std;

int main(){
	int T, n, arr[1000][15], i, j, k;
	cin >> T;
	while(T--){
		cin >> n;
		for(i = 0; i < n; i++)
			cin >> arr[0][i];
		bool flag = false;
		for(i = 1; i < 1000 && !flag; i++){
			for(j = 0; j < n; j++)
				if(j == n - 1)
					arr[i][j] = abs(arr[i - 1][j] - arr[i - 1][0]);
				else
					arr[i][j] = abs(arr[i - 1][j] - arr[i - 1][j + 1]);
			flag = true;
			for(j = 0; j < n && flag; j++)
				if(arr[i][j] != 0)
					flag = false;
			if(flag){
				cout << "ZERO" << endl;
				break;
			}
			
			for(j = 0; j < i; j++){
				flag = true;
				for(k = 0; k < n; k++){
					if(arr[i][k] != arr[j][k])
						flag = false;
				}
				if(flag){
					cout << "LOOP" << endl;
					break;
				}
			}
		}
	}
}