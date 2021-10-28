#include <iostream>
using namespace std;

int main(){
	string a, b;
	while(cin >> a >> b){
		int i = 0, j = 0;
		for(; i < a.size() && j < b.size();){
			if(a[i] == b[j]) i++;
			j++;
		}
		cout << (i == a.size() ? "Yes" : "No") << endl;
	}
}