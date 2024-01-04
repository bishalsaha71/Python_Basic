#include <stdio.h>
int main ()
{
    int a,b,sum, average;
    printf("Enter the first number: ");
    scanf("%d",&a);

    printf("Enter the second number: ");
    scanf("%d",&b);

    sum=a+b;
    printf("The sum is = %d \n",sum);

    average=(a+b)/2;
    printf("The average is: %d \n,",average);

    return 0;
}
