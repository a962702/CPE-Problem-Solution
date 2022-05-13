// Reference: https://cpe.cse.nsysu.edu.tw/cpe/file/attendance/problemPdf/12908.php
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
	int i, in;
	vector<int> v;
	for(i = 0; i < 15000; i++)
		v.push_back(i * (i + 1) / 2);
	while(cin >> in && in){
		vector<int>::iterator it = upper_bound(v.begin(), v.end(), in);
		cout << *it - in << " " << it - v.begin() << endl;
	}
}