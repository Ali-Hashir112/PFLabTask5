#include <stdio.h>

int main() {
    int category, item;

    printf("Enter Category choice \n1. Fast Food \n2. Pakistani Food \n3. Drinks \n");
    scanf("%d", &category);

    switch (category) {
        case 1:
            printf("Enter Fast food choice \n1. Burger \n2. Pizza \n3. Fries \n");
            scanf("%d", &item);

            switch (item) {
                case 1:
                    printf("You selected: Burger\n");
                    break;
                case 2:
                    printf("You selected: Pizza\n");
                    break;
                case 3:
                    printf("You selected: Fries\n");
                    break;
                default:
                    printf("Invalid Item Choice\n");
            }
            break;

        case 2:
            printf("Enter pakistani food choice \n1. Biryani \n2. Karahi \n3. Nihari \n");
            scanf("%d", &item);

            switch (item) {
                case 1:
                    printf("You selected: Biryani\n");
                    break;
                case 2:
                    printf("You selected: Karahi\n");
                    break;
                case 3:
                    printf("You selected: Nihari\n");
                    break;
                default:
                    printf("Invalid Item Choice\n");
            }
            break;

        case 3:
            printf("Enter Drinks choice \n1. Coke \n2. Pepsi \n3. Juice \n");
            scanf("%d", &item);

            switch (item) {
                case 1:
                    printf("You selected: Coke\n");
                    break;
                case 2:
                    printf("You selected: Pepsi\n");
                    break;
                case 3:
                    printf("You selected: Juice\n");
                    break;
                default:
                    printf("Invalid Item Choice\n");
            }
            break;

        default:
            printf("Invalid Category Choice\n");
    }

    return 0;
}