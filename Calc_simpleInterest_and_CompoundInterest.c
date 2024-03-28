/*
Introduction to programming
Calculation of simple interest
By EJO
Feb 6 2024
*/
#include <stdio.h>
//Interest = (principle*rate*time)/1oo
int main()
{
    int principle, rate, time;
    float interest;

    printf("Enter the amount of principle(USD):\n");
    scanf("%d", &principle);

    printf("Enter the rate(in %%):\n");
    scanf("%d", &rate);

    printf("Enter the time(in years):\n");
    scanf("%d", &time);

    //calculating the simple interest
    interest = (principle*rate*time)/ 100.0;

    printf("Interest gained over %d years= USD %.2f\n", time, interest);

    return 0;
}
