#include <iostream>
using namespace std;

int main(){
	string in;
	while(cin >> in && !(in.size() == 1 && in[0] == '.')){
		int i, j, fin = 0;
		for(i = 1; i < in.size() && !fin; i++){
			if(in[0] == in[i] && in.size() % i == 0){
				fin = 1;
				for(j = i; j < in.size(); j++){
					if(in[j] != in[j % i]){
						fin = 0;
						break;
					}
				}
				if(fin) break;
			}
		}
		cout << in.size() / i << endl;
	}
}
