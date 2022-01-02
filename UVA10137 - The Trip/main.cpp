#include <iostream>
#include <iomanip>
using namespace std;

int main(){
	int n;
	while(cin >> n && n){
		double money[1000], avg = 0, ans1 = 0, ans2 = 0;
		for(int i = 0; i < n; i++){
			cin >> money[i];
			avg += money[i];
		}
		avg = (double)((int)(avg * 100 / n + 0.5)) / 100;
		for(int i = 0; i < n; i++)
			if(money[i] > avg)
				ans1 += money[i] - avg;
			else if(money[i] < avg)
				ans2 += avg - money[i];
		cout << fixed << setprecision(2) << "$" << (ans1 < ans2 ? ans1 : ans2) << endl;
	}
}