#include <iostream>
#include <cstring>
#define min(a,b)(a < b ? a : b)
#define max(a,b)(a > b ? a : b)
using namespace std;

int main(){
	int n, N;
	cin >> N;
	for(n = 1; n <= N; n++){
		cout << "Case #" << n << ":" << endl;
		char in[51];
		cin >> in;
		int i, j, max = 0, min = 0, point[51] = {0}, space;
		for(i = 1; i < strlen(in); i++){
			if(in[i - 1] == 'R'){
				if(in[i] == 'F')
					point[i] = point[i - 1];
				else{
					point[i] = point[i - 1] + 1;
					max = max(max, point[i]);
				}
			}
			else if(in[i - 1] == 'F'){
				if(in[i] != 'F')
					point[i] = point[i - 1];
				else{
					point[i] = point[i - 1] - 1;
					min = min(min, point[i]);
				}
			}
			else{
				if(in[i] == 'F'){
					point[i] = point[i - 1] - 1;
					min = min(min, point[i]);
				}
				else
					point[i] = point[i - 1];	
			}
		}
		for(i = max; i >= min - 1; i--){
			if(i == min - 1)
				cout << "+";
			else
				cout << "|";
			space = 1;
			for(j = 0; j < strlen(in) + 2; j++){
				if(i == min - 1)
					cout << "-";
				else if(j < strlen(in) && point[j] == i){
					while(space > 0 && space--)
						cout << " ";
					switch(in[j]){
						case 'R':
							cout << "/";
							break;
						case 'F':
							cout << "\\";
							break;
						case 'C':
							cout << "_";
							break;
					}
				}
				else
					space++;
			}
			cout << endl;
		}
		cout << endl;
	}
}