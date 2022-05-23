#include <iostream>
#include <vector>
using namespace std;

int main(){
	long long root, tmp;
	while(cin >> root){
		vector<vector<long long>> v;
		v.push_back(vector<long long>(1,1));
		for(int i = 1; i <= root; i++){
			cin >> tmp;
			tmp = -tmp;
			vector<long long> x;
			for(int j = 0; j < i + 1; j++){
				if(j == 0)
					x.push_back(1);
				else if(j == i)
					x.push_back(v[i - 1][j - 1] * tmp);
				else
					x.push_back(v[i - 1][j - 1] * tmp + v[i - 1][j]);
			}
			v.push_back(x);
		}
		for(int i = 0; i < v.back().size(); i++){
			if(i != v.back().size() - 1 && v.back()[i] == 0)
				continue;
			if(i != 0){
				if(v.back()[i] >= 0)
					cout << " + ";
				else
					cout << " - ";
			}
			if(i == v.back().size() - 1 || v.back()[i] != 1 && v.back()[i] != -1)
				cout << abs(v.back()[i]);
			if(i !=  v.back().size() - 1)
				cout << "x";
			if(v.back().size() - i > 2)
				cout << "^" << v.back().size() - i - 1;
		}
		cout << " = 0" << endl;
	}
}