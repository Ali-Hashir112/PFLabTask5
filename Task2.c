#include <stdio.h>

int main()
{

    int Balance, WithdrawlAmount;

    printf(" Enter Balance and withdrawl amount in that order:\n");
    scanf("%d \n %d", &Balance, &WithdrawlAmount);

    if(WithdrawlAmount > 0 && Balance > WithdrawlAmount)
    {
        printf("Withdrawl Approved.");
    }
    else
    {
        printf("Withdrawl Denied.");
    }


    return 0;

}