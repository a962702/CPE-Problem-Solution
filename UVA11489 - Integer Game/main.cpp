#include <iostream>
#include <cstring>
using namespace std;

int check(char N[], int length, int dist){
	if(length == 1)
		return 1;
	int i, sum = 0;
	for(i = 0; i < length; i++)
		if(i != dist)
			sum += N[i] - '0';
	if(sum % 3)
		return 0;
	return 1;
}

int main(){
	int t, T;
	cin >> T;
	for(t = 1; t <= T; t++){
		char N[1001];
		int i, j, k, player = -1, act = 1;
		cin >> N;
		while(strlen(N) > 0 && act){
			act = 0;
			for(i = 0; i < strlen(N); i++)
				if(check(N, strlen(N), i)){
					char N2[1001];
					for(j = 0, k = 0; j < strlen(N); j++)
						if(j != i)
							N2[k++] = N[j];
					N2[k] = '\0';
					strcpy(N, N2);
					player *= -1;
					act = 1;
					break;
				}
		}
		if(player == -1)
			cout << "Case " << t << ": T" << endl;
		else
			cout << "Case " << t << ": S" << endl;
	}
}