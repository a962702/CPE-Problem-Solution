#include <iostream>
#include <vector>
using namespace std;

int main(){
	int T;
	cin >> T;
	while(T--){
		int n, i, j, tmp, ans = 0;
		cin >> n;
		vector<int> v;
		for(i = 0; i < n; i++){
			cin >> tmp;
			v.push_back(tmp);
		}
		for(i = 1; i < n; i++)
			for(j = 0; j < i; j++)
				if(v[j] <= v[i])
					ans++;
		cout << ans << endl;
	}
}