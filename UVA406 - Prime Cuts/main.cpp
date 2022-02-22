#include <iostream>
#include <vector>
#define max(a,b)(a > b ? a : b)
#define min(a,b)(a < b ? a : b)
using namespace std;

vector<int> v;

void build(){
	for(int i = 1; i <= 1000; i++){
		bool flag = true;
		for(int j = 2; j < i && flag; j++)
			if(i % j == 0)
				flag = false;
		if(flag)
			v.push_back(i);
	}
}

int main(){
	build();
	int N, C, i, j;
	while(cin >> N >> C){
		cout << N << " " << C << ":";
		for(i = 0; i < v.size(); i++)
			if(v[i] > N)
				break;
		if(i % 2 == 0)
			for(j = max(0, i / 2 - C); j < min(i, i / 2 + C); j++)
				cout << " " << v[j];
		else
			for(j = max(0, i / 2 - C + 1); j < min(i, i / 2 + C); j++)
				cout << " " << v[j];
		cout << endl << endl;
	}
}