#include <stdio.h>
#include <string.h>

int main(){
	char a[10], b[10];
	while(scanf(" %s %s", a, b)!=EOF){
		if(a[0] == '0' && b[0] == '0') break;
		int i = strlen(a) - 1, j = strlen(b) - 1, carry = 0, ans = 0;
		while(i!=-1 || j!=-1){
			if (i >= 0) carry += a[i--] - '0';
			if (j >= 0) carry += b[j--] - '0';
			carry /= 10;
			if(carry!=0) ans += 1;
		}
		if (ans > 0) printf("%d carry operation%s.\n", ans, ans > 1 ? "s" : "");
		else printf("No carry operation.\n");
	}
}