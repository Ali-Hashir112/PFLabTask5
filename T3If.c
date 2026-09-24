#include <stdio.h>

int main()
{
    int balance, choice, deposit, withdrawl;

    balance = 50000;

    printf("Enter choie \n1. Check Balance \n2. Deposit Money \n3.Withdraw Money \n4. Exit \n");
    scanf("%d" , &choice);

    if(choice == 1)
    {
        printf("Balance: %d" , balance);
    }
    else if(choice == 2)
    {
        printf("Enter amount to deposit: ");
        scanf("%d" , &deposit);
    }
    else if(choice == 3)
    {
        printf("Enter withdrawl amount: ");
        scanf("%d" , &withdrawl);
        if(withdrawl <= balance)
        {
            balance -= withdrawl;
            printf("New balance: %d" , balance);
        }
        else 
        {
            printf("Insufficient Balance");
        }
    }
    else if(choice == 4)
    {
        printf("Thank you for using the ATM.");
    }

    else
    {
        printf("Invalid choice.");
    }
}