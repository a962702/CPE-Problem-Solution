#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main(){
	double n, PI = 2.0 * acos(0.0);
	while(cin >> n){
		double x = n * n - n * n * PI * (30.0 / 360.0) * 2 - n * (n / 2 * sqrt(3.0)) / 2;
		double y = n * n - n * n * PI * (90.0 / 360.0) - 2 * x;
		double z = n * n - x * 4 - y * 4;
		cout << fixed << setprecision(3) << z << " " << y * 4 << " " << x * 4 << endl;
	}
}