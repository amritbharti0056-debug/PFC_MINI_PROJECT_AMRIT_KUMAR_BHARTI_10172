#include <stdio.h>
//amrit kumar bharti
//erp-10172
int main() {
    int balance = 5000;   // initial balance
    int withdraw;
    printf("Enter withdrawal amount: ");
    scanf("%d", &withdraw);
    // First check: amount should be positive
    if (withdraw > 0) {
        // Second check: amount should be <= balance
        if (withdraw <= balance) {
            balance = balance - withdraw;
            printf("Withdrawal successful!\n");
            printf("Updated Balance: %d\n", balance);
        } else {
            printf("Insufficient balance.\n");
        }
    } else {
        printf("Invalid amount. Enter a positive value.\n");
    }
    return 0;
}
