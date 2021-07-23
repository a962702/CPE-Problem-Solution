#include <stdio.h>
#include <string.h>

int main(){
	int Testcase;
	scanf("%d\n\n", &Testcase);
	while(Testcase--){
		char species[10000][31], input[31];
		int total_count = 0, total_species = 0, species_count[10000] = {0};
		while(fgets(input, 31, stdin) != NULL){
			if(input[0] == '\n')
				break;
			if(input[strlen(input) - 1] == '\n')
				input[strlen(input) - 1] = '\0';
			int isFound = 0;
			for(int i = 0; i < total_species; i++){
				if(strcmp(species[i], input) == 0){
					species_count[i] += 1;
					isFound = 1;
					break;
				}
			}
			if(isFound == 0){
				strcpy(species[total_species], input);
				species_count[total_species] = 1;
				total_species += 1;
			}
			total_count += 1;
		}
		for(int i = 0; i < total_species; i++){
			for(int j = i + 1; j < total_species; j++){
				if(strcmp(species[i], species[j]) > 0){
					char tmp_char[31];
					strcpy(tmp_char, species[i]);
					strcpy(species[i], species[j]);
					strcpy(species[j], tmp_char);
					int tmp_int;
					tmp_int = species_count[i];
					species_count[i] = species_count[j];
					species_count[j] = tmp_int;
				}
			}
		}
		for(int i = 0; i < total_species; i++)
			printf("%s %.4f\n", species[i], species_count[i] * 100.0f / total_count);
		if(Testcase > 0)
			printf("\n");
	}
}