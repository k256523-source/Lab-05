#include <stdio.h>

int main() {
    int luggageType, subType;
    float weight, totalFee = 0;

    printf("Enter luggage type:\n");
    printf("1. Handbag\n");
    printf("2. Checked Bag\n");
    printf("3. Sports Equipment\n");
    scanf("%d", &luggageType);

    printf("Enter weight (in kg): ");
    scanf("%f", &weight);

    switch (luggageType) {

        case 1:
            printf("Enter handbag type:\n");
            printf("1. Small\n");
            printf("2. Large\n");
            scanf("%d", &subType);

            switch (subType) {
                case 1:
                    totalFee = weight * 100;
                    break;
                case 2:
                    totalFee = weight * 200;
                    break;
                default:
                    printf("Invalid handbag type\n");
                    return 0;
            }
            break;

        case 2:
            printf("Enter checked bag type:\n");
            printf("1. Domestic\n");
            printf("2. International\n");
            scanf("%d", &subType);

            switch (subType) {
                case 1:
                    totalFee = weight * 300;
                    break;
                case 2:
                    totalFee = weight * 500;
                    break;
                default:
                    printf("Invalid checked bag type\n");
                    return 0;
            }
            break;

        case 3:
            totalFee = weight * 1000;
            break;

        default:
            printf("Invalid luggage type\n");
            return 0;
    }

    printf("Total Luggage Fee = Rs. %.2f\n", totalFee);

    return 0;
}
