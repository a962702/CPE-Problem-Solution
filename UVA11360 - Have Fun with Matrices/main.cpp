#include <iostream>
using namespace std;

int main(){
	int T, N, M, t, i, j, in1, in2, matrix[10][10];
	char command[10];
	cin >> T;
	for(t = 1; t <= T; t++){
		cin >> N;
		for(i = 0; i < N; i++)
			for(j = 0; j < N; j++)
				scanf("%1d", &matrix[i][j]);
		cin >> M;
		while(M--){
			scanf("%s", command);
			switch(command[0]){
				case 'r':
					cin >> in1 >> in2;
					for(i = 0; i < N; i++)
						swap(matrix[in1 - 1][i], matrix[in2 - 1][i]);
					break;
				case 'c':
					cin >> in1 >> in2;
					for(i = 0; i < N; i++)
						swap(matrix[i][in1 - 1], matrix[i][in2 - 1]);
					break;
				case 'i':
					for(i = 0; i < N; i++)
						for(j = 0; j < N; j++){
							matrix[i][j]++;
							if(matrix[i][j] > 9)
								matrix[i][j] = 0;
						}
					break;
				case 'd':
					for(i = 0; i < N; i++)
						for(j = 0; j < N; j++){
							matrix[i][j]--;
							if(matrix[i][j] < 0)
								matrix[i][j] = 9;
						}
					break;
				case 't':
					for(i = 0; i < N; i++)
						for(j = i + 1; j < N; j++)
							swap(matrix[i][j], matrix[j][i]);
					break;
			}
		}
		cout << "Case #" << t << endl;
		for(i = 0; i < N; i++){
			for(j = 0; j < N; j++)
				cout << matrix[i][j];
			cout << endl;
		}
		cout << endl;
	}
}