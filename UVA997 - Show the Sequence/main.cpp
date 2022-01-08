#include <iostream>
#include <vector>
using namespace std;

int main(){
    char c;
    int N, tmp;
    while (cin >> c){
        vector<int> v;
        vector<char> sign;
        while ((c=cin.peek())!=' '){
            if (c=='[' || c==']') getchar();
            else if (c=='+' || c=='*')
            	sign.push_back(getchar());
            else {
            	cin >> tmp;
            	v.push_back(tmp);
            }
        }
        cin >> N;
        getchar(); // skip \n
        vector<int> ans[v.size()];
        for (int i = 0; i < N; i++){
            for (int j = v.size() - 1; j >= 0; j--){
                if (j == v.size() - 1)
                	ans[j].push_back(v[j]);
                else{
                    if (i == 0){
                        if (sign[j] == '+')
                        	ans[j].push_back(v[j]);
                        else
                        	ans[j].push_back(v[j]*ans[j+1][i]);
                    }else{
                        if (sign[j]=='+')
                        	ans[j].push_back(ans[j][i-1]+ans[j+1][i-1]);
                        else
                        	ans[j].push_back(ans[j][i-1]*ans[j+1][i]);
                    }
                }
            }
            if(i != 0)
            	cout << " ";
            cout << ans[0][i];
        }
        cout << endl;
    }
}