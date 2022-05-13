#include <iostream>
using namespace std;

int main(){
	int T, M, Y, C;
	char c;
	cin >> T;
	while(T--){
		cin >> M >> Y >> C;
		while(cin.peek() != '\n'){
			cin >> c;
			if(c == 'M' || c == 'R' || c == 'B' || c == 'V')
				M--;
			if(c == 'Y' || c == 'R' || c == 'B' || c == 'G')
				Y--;
			if(c == 'C' || c == 'B' || c == 'G' || c == 'V')
				C--;
		}
		getchar();
		if(M >= 0 && Y >= 0 && C >= 0)
			cout << "YES " << M << " " << Y << " " << C << endl;
		else
			cout << "NO" << endl;
	}
}