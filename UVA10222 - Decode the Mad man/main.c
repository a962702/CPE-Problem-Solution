#include stdio.h
#include string.h
#include ctype.h

int main(){
	char str[1000];
	while(fgets(str, 1000, stdin)!=NULL){
		for(int i = 0; i  strlen(str); i++){
			switch(tolower(str[i])){
				case ' '
					printf(%c, ' ');
					break;
				case 'e'
					printf(%c, 'q');
					break;
				case 'd'
					printf(%c, 'a');
					break;
				case 'c'
					printf(%c, 'z');
					break;
				case 'r'
					printf(%c, 'w');
					break;
				case 'f'
					printf(%c, 's');
					break;
				case 'v'
					printf(%c, 'x');
					break;
				case 't'
					printf(%c, 'e');
					break;
				case 'g'
					printf(%c, 'd');
					break;
				case 'b'
					printf(%c, 'c');
					break;
				case 'y'
					printf(%c, 'r');
					break;
				case 'h'
					printf(%c, 'f');
					break;
				case 'n'
					printf(%c, 'v');
					break;
				case 'u'
					printf(%c, 't');
					break;
				case 'j'
					printf(%c, 'g');
					break;
				case 'm'
					printf(%c, 'b');
					break;
				case 'i'
					printf(%c, 'y');
					break;
				case 'k'
					printf(%c, 'h');
					break;
				case ','
					printf(%c, 'n');
					break;
				case 'o'
					printf(%c, 'u');
					break;
				case 'l'
					printf(%c, 'j');
					break;
				case '.'
					printf(%c, 'm');
					break;
				case 'p'
					printf(%c, 'i');
					break;
				case ';'
					printf(%c, 'k');
					break;
				case '['
					printf(%c, 'o');
					break;
				case '''
					printf(%c, 'l');
					break;
				case ']'
					printf(%c, 'p');
					break;
			}
		}
		printf(n);
	}
}