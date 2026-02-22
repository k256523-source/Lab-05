#include <stdio.h>

int main() {
    int enteredCard, enteredPIN;
    int validCard = 1234;
    int validPIN = 1111;
    float amount, balance = 10000;

    printf("Enter card number: ");
    scanf("%d", &enteredCard);

    if (enteredCard == validCard) {
        printf("Enter PIN: ");
        scanf("%d", &enteredPIN);
        if (enteredPIN == validPIN) {
            printf("Enter transaction amount: ");
            scanf("%f", &amount);

            if (amount <= balance && amount > 0) {
                printf("Transaction Successful\n");
            } else {
                printf("Insufficient Funds\n");
            }
        } else {
            printf("Invalid PIN\n");
        }
    } else {
        printf("Invalid Card\n");
    }

    return 0;
}
