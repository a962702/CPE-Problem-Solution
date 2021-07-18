#include <stdio.h>

int main(){
	float x[4], y[4];
	while(scanf("%f %f %f %f %f %f %f %f", &x[0], &y[0], &x[1], &y[1], &x[2], &y[2], &x[3], &y[3])!=EOF){
		if(x[0] == x[1] && y[0] == y[1]){
			float center_x = (x[2] + x[3]) / 2.0f;
			float center_y = (y[2] + y[3]) / 2.0f;
			printf("%.3f %.3f\n", x[0] + (center_x - x[0]) * 2.0f, y[0] + (center_y - y[0]) * 2.0f);
		}
		else if(x[0] == x[2] && y[0] == y[2]){
			float center_x = (x[1] + x[3]) / 2.0f;
			float center_y = (y[1] + y[3]) / 2.0f;
			printf("%.3f %.3f\n", x[0] + (center_x - x[0]) * 2.0f, y[0] + (center_y - y[0]) * 2.0f);
		}
		else if(x[0] == x[3] && y[0] == y[3]){
			float center_x = (x[1] + x[2]) / 2.0f;
			float center_y = (y[1] + y[2]) / 2.0f;
			printf("%.3f %.3f\n", x[0] + (center_x - x[0]) * 2.0f, y[0] + (center_y - y[0]) * 2.0f);
		}
		else if(x[1] == x[2] && y[1] == y[2]){
			float center_x = (x[0] + x[3]) / 2.0f;
			float center_y = (y[0] + y[3]) / 2.0f;
			printf("%.3f %.3f\n", x[1] + (center_x - x[1]) * 2.0f, y[1] + (center_y - y[1]) * 2.0f);
		}
		else if(x[1] == x[3] && y[1] == y[3]){
			float center_x = (x[0] + x[2]) / 2.0f;
			float center_y = (y[0] + y[2]) / 2.0f;
			printf("%.3f %.3f\n", x[1] + (center_x - x[1]) * 2.0f, y[1] + (center_y - y[1]) * 2.0f);
		}
		else if(x[2] == x[3] && y[2] == y[3]){
			float center_x = (x[0] + x[1]) / 2.0f;
			float center_y = (y[0] + y[1]) / 2.0f;
			printf("%.3f %.3f\n", x[2] + (center_x - x[2]) * 2.0f, y[2] + (center_y - y[2]) * 2.0f);
		}
	}
}