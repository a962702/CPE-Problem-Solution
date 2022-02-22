#include <iostream>
using namespace std;

int main(){
	int H1, M1, H2, M2;
	while(cin >> H1 >> M1 >> H2 >> M2 && (H1 || M1 || H2 || M2)){
		int ans = (H2 * 60 + M2) - (H1 * 60 + M1);
		cout << (ans > 0 ? ans : ans + 1440) << endl;
	}
}