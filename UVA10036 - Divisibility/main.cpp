#include <iostream>
#include <cstring>
using namespace std;

int main(){
	int M;
	cin >> M;
	while (M--){
		int N, K;
		cin >> N >> K;
		int num[N];
		for (int i = 0; i < N; i++){
			cin >> num[i];
			num[i] = abs(num[i])%K;
		}
		int ans[N+1][K];
		memset(ans,0,sizeof(ans));
		ans[0][0] = 1;
		for (int i = 0; i < N; i++)
			for (int j = 0; j < K; j++)
				if (ans[i][j])
					ans[i+1][(j+K+num[i])%K] = ans[i+1][(j+K-num[i])%K] = 1;
		cout <<(ans[N][0]?"Divisible":"Not divisible") <<endl;
	}
}