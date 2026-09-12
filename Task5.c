#include <stdio.h>

int main()
{

    int choice;

    printf("Enter a choice 1 = Burger, 2 = Pizza, 3 = Biryani, and 4 = Sandwich :\n");
    scanf("%d" , &choice);

    switch (choice)
    {
    case 1:
        printf("Burger");
        break;
    
    case 2:
        printf("Pizza");
        break;

    case 3:
        printf("Biryani");
        break;

    case 4:
        printf("Sandwich");
        break;
        
    default:
        printf("Invalid choice");
        break;
    }

    return 0;

}