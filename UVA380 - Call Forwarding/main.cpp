#include <iostream>
#include <iomanip>
#include <vector>
using namespace std;

int main(){
	cout << "CALL FORWARDING OUTPUT" << endl;
	int N, n;
	cin >> N;
	for(n = 1; n <= N; n++){
		cout << "SYSTEM " << n << endl;
		int a, b, c, d, flag, i, j;
		vector<int> from, to, start, end;
		while(cin >> a && a){
			cin >> b >> c >> d;
			from.push_back(a);
			to.push_back(d);
			start.push_back(b);
			end.push_back(b + c);
		}
		while(cin >> a && a != 9000){
			cin >> b;
			flag = 1;
			vector<int> forward;
			forward.push_back(b);
			while(flag){
				flag = 0;
				for(i = 0; i < from.size(); i++)
					if(from[i] == forward.back()){
						if(start[i] <= end[i] && a >= start[i] && a <= end[i]){
							forward.push_back(to[i]);
							flag = 1;
							break;
						}
					}
				for(i = 0; flag && i < forward.size(); i++)
					for(j = i + 1; flag && j < forward.size(); j++)
						if(forward[i] == forward[j]){
							flag = 0;
							forward.push_back(9999);
						}
			}
			cout << "AT " << setw(4) << setfill('0') << a << " CALL TO " << setw(4) << setfill('0') << b << " RINGS " << setw(4) << setfill('0') << forward.back() << endl;
		}
	}
	cout << "END OF OUTPUT" << endl;
}