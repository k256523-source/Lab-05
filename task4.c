#include <stdio.h>

int main() {
    int category, book, quantity;
    int price = 0;

    printf("Select Book Category:\n");
    printf("1. Fiction\n");
    printf("2. Non-Fiction\n");
    scanf("%d", &category);

    switch (category) {

        case 1:
            printf("Select Fiction Book:\n");
            printf("1. Novel\n");
            printf("2. Comic\n");
            scanf("%d", &book);

            switch (book) {
                case 1:
                    price = 600;
                    printf("Selected Book: Novel\n");
                    break;
                case 2:
                    price = 300;
                    printf("Selected Book: Comic\n");
                    break;
                default:
                    printf("Invalid book selection\n");
                    return 0;
            }
            break;

        case 2:
            printf("Select Non-Fiction Book:\n");
            printf("1. Biography\n");
            printf("2. Self-Help\n");
            scanf("%d", &book);

            switch (book) {
                case 1:
                    price = 800;
                    printf("Selected Book: Biography\n");
                    break;
                case 2:
                    price = 500;
                    printf("Selected Book: Self-Help\n");
                    break;
                default:
                    printf("Invalid book selection\n");
                    return 0;
            }
            break;

        default:
            printf("Invalid category selection\n");
            return 0;
    }

    printf("Enter quantity: ");
    scanf("%d", &quantity);

    printf("Total Bill = Rs. %d\n", price * quantity);

    return 0;
}
