#include <iostream>
#include <queue>
using namespace std;

int main(){
	int n;
	while(cin >> n){
		if(!n) break;
		queue<int> q;
		bool firsttime = true;
		for(int i = 1; i <= n; i++)
			q.push(i);
		cout << "Discarded cards:";
		while(q.size() != 1){
			if(!firsttime)
				cout << ",";
			firsttime = false;
			cout << " " << q.front();
			q.pop();
			if(q.size() > 1){
				q.push(q.front());
				q.pop();
			}
		}
		cout << endl << "Remaining card: " << q.front() << endl;
	}
}