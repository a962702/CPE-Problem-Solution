#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
	int N, i, tmp;
	while(cin >> N){
		cout << "Lumberjacks:" << endl;
		while(N--){
			vector<int> v1, v2, v3;
			for(i = 0; i < 10; i++){
				cin >> tmp;
				v1.push_back(tmp);
			}
			v2 = v1;
			sort(v2.begin(), v2.end());
			v3 = v2;
			reverse(v3.begin(), v3.end());
			if(v1 != v2 && v1 != v3)
				cout << "Unordered" << endl;
			else
				cout << "Ordered" << endl;
		}
	}
}