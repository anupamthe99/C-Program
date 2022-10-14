#include <stdio.h>
int main()
{
    int a = 0;
    int n;
    int sum=0;
    printf("Enter the five-digit number :");
    scanf("%d", &n);
    for (int i = 0; i < 5; i++)
    {
        a = n % 10;
        sum = a + sum;
        n = n / 10;
    }
    printf("The sum of five-digit number is %d", sum);

    return 0;
}