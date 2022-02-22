#include <iostream>
#define max(a,b)(a>b?a:b)
#define min(a,b)(a<b?a:b)
using namespace std;

int main(){
	int in, A = 0, B = 11;
	while(cin >> in && in){
		string s;
		cin >> s >> s;
		if(s == "high")
			B = min(B, in);
		else if(s == "low")
			A = max(A, in);
		else{
			if(in > A && in < B && A < B)
				cout << "Stan may be honest" << endl;
			else
				cout << "Stan is dishonest" << endl;
			A = 0;
			B = 11;
		}
	}
}