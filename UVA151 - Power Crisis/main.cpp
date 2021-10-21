#include <iostream>
#include <queue>
using namespace std;

int main(){
	int N;
	while(cin >> N){
		if(!N) break;
		if(N == 13)
			cout << "1" << endl;
		else{
			queue<int> q;
			for(int i = 1; i <= N; i++)
				q.push(i);
			for(int i = 2; ; i++){
				queue<int> p(q);
				while(p.size() > 1){
					p.pop();
					for(int j = 0; j < i - 1 && p.size() > 1; j++){
						p.push(p.front());
						p.pop();
					}
				}
				if(p.front() == 13){
					cout << i << endl;
					break;
				}
			}
		}
	}
}