#include <iostream>
#include <vector>
#include <queue>
using namespace std;

int main(){
	int testcase;
	cin >> testcase;
	while(testcase--){
		int m, n;
		cin >> m >> n;
		vector<int> map[26];
		while(m--){
			string a, b;
			cin >> a >> b;
			map[a[0] - 'A'].push_back(b[0] - 'A');
			map[b[0] - 'A'].push_back(a[0] - 'A');
		}
		while(n--){
			string a, b;
			cin >> a >> b;
			queue<vector<int>> q;
			vector<int> tmp;
			tmp.push_back(a[0] - 'A');
			q.push(tmp);
			while(q.size() > 0){
				tmp = q.front();
				q.pop();
				if(tmp.back() == b[0] - 'A'){
					for(int i = 0; i < tmp.size(); i++)
						printf("%c", tmp[i] + 'A');
					cout << endl;
					break;
				}
				for(int i = 0; i < map[tmp.back()].size(); i++){
					tmp.push_back(map[tmp.back()][i]);
					q.push(tmp);
					tmp.pop_back();
				}
			}
		}
		if(testcase > 0)
			cout << endl;
	}
}