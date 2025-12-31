#include <stdio.h>
//amrit kumar bharti
//erp-10172
int main() {
    int balance = 10000;          
    int withdraw;
    int choice;
    int pin = 4321;
    int enteredPin;
    int attempts = 0;
    while (attempts < 3) {
        printf("Enter your ATM PIN: ");
        scanf("%d", &enteredPin);
        if (enteredPin == pin) {
            printf("\nLogin successful!\n");
            break;
        } else {
            printf("Incorrect PIN. Try again.\n");
            attempts++;
        }
    }
    if (attempts == 3) {
        printf("\nToo many incorrect attempts. Card blocked.\n");
        return 0;
    }
//atm menu
    do {
        printf("\n--------- ATM MENU ---------\n");
        printf("1. Check Balance\n");
        printf("2. Withdraw Money\n");
        printf("3. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        if (choice == 1) {
            printf("\nYour current balance is: %d\n", balance);
        }

        else if (choice == 2) {
            printf("\nEnter withdrawal amount: ");
            scanf("%d", &withdraw);
//nested if logic
            if (withdraw > 0) {
                if (withdraw <= balance) {
                    balance = balance - withdraw;
                    printf("\nWithdrawal successful!\n");
                    printf("Updated Balance: %d\n", balance);
                } else {
                    printf("\nInsufficient balance.\n");
                }
            } else {
                printf("\nInvalid amount. Enter a positive value.\n");
            }
        }
        else if (choice == 3) {
            printf("\nThank you for using the ATM.\n");
        }

        else {
            printf("\nInvalid choice. Please try again.\n");
        }

    } while (choice != 3);

    return 0;
}
//OUTPUT
Enter your ATM PIN: 4321

Login successful!

--------- ATM MENU ---------
1. Check Balance
2. Withdraw Money
3. Exit
Enter your choice: 2

Enter withdrawal amount: 3000

Withdrawal successful!
Updated Balance: 7000
