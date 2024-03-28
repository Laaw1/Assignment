#include <stdio.h>

int main() {
    // Variables to store user inputs
    int bookID, dueDate, returnDate;

    // telling user to enter book ID, due date, and return date
    printf("Enter Book ID: ");
    scanf("%d", &bookID);
    printf("Enter Due Date: ");
    scanf("%d", &dueDate);
    printf("Enter Return Date: ");
    scanf("%d", &returnDate);

    // Calculate days overdue
    int daysOverdue = returnDate - dueDate;

    // Determine fine rate based on days overdue
    int fineRate;
    if (daysOverdue <= 7) {
        fineRate = 20;
    } else if (daysOverdue >= 8 && daysOverdue <= 14) {
    fineRate = 50;
    } else {
        fineRate = 100;
    }

    // Calculating on rate offine amount
    int fineAmount = daysOverdue * fineRate;

    // Displaying book information and calculate rate
    printf("\nBook ID: %d\n", bookID);
    printf("Due Date: %d\n", dueDate);
    printf("Return Date: %d\n", returnDate);
    printf("Days Overdue: %d\n", daysOverdue);
    printf("Fine Rate: $%d per day\n", fineRate);
    printf("Fine Amount: $%d\n", fineAmount);

    return 0;
}
