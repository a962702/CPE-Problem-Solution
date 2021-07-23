#include <stdio.h>
#include <math.h>

int main(){
	int s, a;
	char str[4];
	while(scanf("%d %d %s", &s, &a, str)!=EOF){
		double arc_distance, chord_distance;
		switch(str[0]){
			case 'm': // min
				arc_distance = (6440.0f + s) * 2.0f * M_PI * (a / 60.0f / 360.0f);
				chord_distance = (6440.0f + s) * sin(a / 60.0f / 2.0f / 180.0f * M_PI) * 2;
				break;
			case 'd': // deg
				arc_distance = (6440.0f + s) * 2.0f * M_PI * (a / 360.0f);
				chord_distance = (6440.0f + s) * sin(a / 2.0f /180.0f * M_PI) * 2;
				break;
		}
		printf("%.6f %.6f\n", arc_distance, chord_distance);
	}
}