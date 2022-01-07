#include <iostream>
#include <vector>
#include <map>
#include <algorithm>
using namespace std;

int main(){
	int n;
	while(cin >> n && n){
		map<string, int> m;
		while(n--){
			vector<string> v;
			string s;
			for(int i = 0; i < 5; i++){
				cin >> s;
				v.push_back(s);
			}
			sort(v.begin(), v.end());
			s = "";
			for(int i = 0; i < v.size(); i++)
				s += v[i];
			m[s]++;
		}
		int max = 0, count = 0;
		for(auto i : m){
			if(i.second > max)
				count = max = i.second;
			else if(i.second == max)
				count += i.second;
		}
		cout << count << endl;
	}
}