#include <iostream>
#include <vector>

using namespace std;

vector<vector<int>> arr;
vector<string> arr_s;

void build(){
	arr.push_back(vector<int>{1});
	arr.push_back(vector<int>{2});
	int t = 1;
	while(arr[t].size() <= 100){
		arr.push_back(vector<int>());
		t++;
		int carry = 0;
		for(int i = 0; i < arr[t - 1].size() || carry; i++){
			int sum = (i < arr[t - 1].size() ? arr[t - 1][i] : 0) + (i < arr[t - 2].size() ? arr[t - 2][i] : 0) + carry;
			arr[t].push_back(sum % 10);
			carry = sum / 10;
		}
	}
	for(int i = 0; i < arr.size(); i++){
		string s = "";
		for(int j = arr[i].size() - 1; j >=0; j--)
			s += arr[i][j] + '0';
		arr_s.push_back(s);
	}
}

int getans(string a, string b){
	int count = 0;
	for(int i = 0; i < arr_s.size(); i++){
		if(arr_s[i].length() < a.length() || arr_s[i].length() == a.length() && arr_s[i].compare(a) < 0)
			continue;
		if(arr_s[i].length() > b.length() || arr_s[i].length() == b.length() && arr_s[i].compare(b) > 0)
			break;
		count++;
	}
	return count;
}

int main(){
	build();
	string a, b;
	while(cin >> a >> b){
		if(a == "0" &&  b == "0")
			break;
		cout << getans(a, b) << endl;
	}
}