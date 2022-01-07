#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

struct work{
	int id;
	double fine;
};

bool comp(work w1, work w2){
	if(w1.fine < w2.fine) return true;
	if(w1.fine == w2.fine && w1.id < w2.id) return true;
	return false;
}

int main(){
	int testcase, N, i;
	double in1, in2;
	cin >> testcase;
	while(testcase--){
		cin >> N;
		vector<work> v;
		for(i = 1; i <= N; i++){
			work w;
			cin >> in1 >> in2;
			w.id = i;
			w.fine = in1 / in2;
			v.push_back(w);
		}
		sort(v.begin(), v.end(), comp);
		bool space = false;
		for(work w : v){
			if(space) cout << " ";
			cout << w.id;
			space = true;
		}
		cout << endl;
		if(testcase) cout << endl;
	}
}