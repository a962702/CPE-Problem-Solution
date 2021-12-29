#include <iostream>
using namespace std;

int table[2][10] = {
    {0, 1, 4, 7, 6, 5, 6, 3, 6, 9},
    {0, 1, 6, 3, 6, 5, 6, 7, 4, 9}};

int main(void)
{
    int result, tens, len;
    string s;
    while (cin >> s && s != "0")
    {
        if (s.length() >= 2)
            tens = s[s.length() - 1 - 1] - '0';
        else
            tens = 0;
        result = tens * 7;
        for (int i = 1; i <= s[s.length() - 1] - '0'; i++)
            result += table[tens % 2][i];
        cout << result % 10 << endl;
    }
    return 0;
}