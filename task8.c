#include <stdio.h>
#include <math.h>

int main() {
    int choice;
    float weight, height, age;
    float result;
    int gender; // 1 = Male, 2 = Female

    printf("1 = BMI Calculation\n");
    printf("2 = BMR Calculation\n");
    printf("3 = Ideal Weight (Devine Formula)\n");
    printf("4 = Heart Rate Zone\n");
    printf("Select Operation: ");
    scanf("%d", &choice);

    switch(choice) {

        case 1:  
            printf("Enter weight (kg): ");
            scanf("%f", &weight);
            printf("Enter height (meters): ");
            scanf("%f", &height);

            if(weight > 0) {
                if(height > 0) {
                    result = weight / pow(height, 2);
                    printf("Your BMI = %.2f\n", result);
                } else {
                    printf("Error: Height must be positive!\n");
                }
            } else {
                printf("Error: Weight must be positive!\n");
            }
            break;

        case 2:  
            printf("Enter weight (kg): ");
            scanf("%f", &weight);
            printf("Enter height (cm): ");
            scanf("%f", &height);
            printf("Enter age (years): ");
            scanf("%f", &age);
            printf("Enter gender (1=Male, 2=Female): ");
            scanf("%d", &gender);

            if(weight > 0) {
                if(height > 0) {
                    if(age > 0) {
                        if(gender == 1) {
                            result = 10*weight + 6.25*height - 5*age + 5;
                            printf("Your BMR = %.2f calories/day\n", result);
                        }
                        else if(gender == 2) {
                            result = 10*weight + 6.25*height - 5*age - 161;
                            printf("Your BMR = %.2f calories/day\n", result);
                        }
                        else {
                            printf("Error: Invalid gender selection!\n");
                        }
                    } else {
                        printf("Error: Age must be positive!\n");
                    }
                } else {
                    printf("Error: Height must be positive!\n");
                }
            } else {
                printf("Error: Weight must be positive!\n");
            }
            break;

        case 3:  
            printf("Enter height (inches): ");
            scanf("%f", &height);
            printf("Enter gender (1=Male, 2=Female): ");
            scanf("%d", &gender);

            if(height > 0) {
                if(gender == 1) {
                    result = 50 + 2.3 * fabs(height - 60);
                    printf("Ideal Weight = %.2f kg\n", result);
                }
                else if(gender == 2) {
                    result = 45.5 + 2.3 * fabs(height - 60);
                    printf("Ideal Weight = %.2f kg\n", result);
                }
                else {
                    printf("Error: Invalid gender selection!\n");
                }
            } else {
                printf("Error: Height must be positive!\n");
            }
            break;

        case 4:  
            printf("Enter age: ");
            scanf("%f", &age);

            if(age > 0) {
                float maxHR = 220 - age;
                float lower = maxHR * 0.50;
                float upper = maxHR * 0.85;

                printf("Your Target Heart Rate Zone: %.2f - %.2f bpm\n", lower, upper);
            } else {
                printf("Error: Age must be positive!\n");
            }
            break;

        default:
            printf("Error: Invalid menu selection!\n");
    }

    return 0;
}