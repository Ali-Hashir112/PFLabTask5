#include <stdio.h>

int main()
{
    int years, rating;

    printf("Enter years of service and rating in that order: \n");
    scanf("%d \n %d" , &years , &rating);

    if( rating == 5 && years >= 3)
    {
        printf("Excellent Bonus");
    }
    else if(rating >= 4 && years >= 2)
    {
        printf("Great Bonus");
    }
    else if(rating >= 3 && years >= 1)
    {
        printf("Basic Bonus");
    }
    else
    {
        printf("No bonus");
    }

    return 0;

}