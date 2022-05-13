// 2022-05-13 07:24:59 - Time limit exceeded
#include <iostream>
using namespace std;

int main(){
	int i, in, table[15000] = {0};
	for(i = 1; i < 15000; i++)
		table[i] = table[i - 1] + i;
	while(cin >> in && in){
		i = 2;
		while(table[i] <= in)
			i++;
		cout << table[i] - in << " " << i << endl;
	}
}