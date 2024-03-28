/*
Amount = principle*(1 + rate/n)^(n*time) where n represents the frequency principle is likely to be compounded.
Introduction to programming
Calculation of compound Interest
EJO
Laaw1
sun Feb 11 12:57
*/
#include <stdio.h>
#include <math.h>
int main()
{
    int principle, n, time;
    float rate, compound_interest;

    printf("Enter the principle amount:$  ");
    scanf("%d", &principle);

    printf("Enter the number of times principle is compounded in a year: ");
    scanf("%d", &n);

    printf("Enter period time (In years):");
    scanf("%d", &time);

    printf("Enter rate (in %%):");
    scanf("%f",&rate);

    compound_interest = principle* pow(1+rate/100/n, n * time);

    printf("total amount after %d years = %.2f\n", time, compound_interest);

    return 0;
}
