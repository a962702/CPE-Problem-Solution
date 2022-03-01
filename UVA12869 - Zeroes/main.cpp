#include <iostream>
using namespace std;

int main(){
	long long a, b, low, high;
	while(cin >> a >> b && a && b){
		low = a / 5;
		high = b / 5;
		cout << high - low + 1 << endl;
	}
}