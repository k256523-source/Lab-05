#include <stdio.h>

int main(){
	
	int FitnessScore, age;
	
	printf("Enter your fitness score: ");
	scanf("%d", &FitnessScore);
	printf("Enter your age: ");
	scanf("%d", &age);
	
	if (FitnessScore >= 85){
		if (age < 25){
			printf("40% discount!!");
		} else {
			printf("25% discount!!");
		}
	} else if(FitnessScore >= 70 && age < 30){
		printf("15% discount!!");
	} else{
		printf("No discount!!");
	}
	
	return 0;
}
