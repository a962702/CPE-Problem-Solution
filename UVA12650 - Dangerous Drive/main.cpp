#include <iostream>
using namespace std;

int main(){
	int N, R, i;
	while(cin >> N >> R){
		bool arr[10001] = {0}, flag = true;
		while(R--){
			cin >> i;
			arr[i] = true;
		}
		for(i = 1; i <= N; i++)
			if(!arr[i]){
				cout << i << " ";
				flag = false;
			}
		if(flag)
			cout << "*" << endl;
		else
			cout << endl;
	}
}