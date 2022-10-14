# include <stdio.h>
int main(){
    int a;
int num;
int reverse;
printf("Enter a number ");
scanf("%d",&num);
for (int i = 0; i < 5; i++)
{
    a=num%10;
    reverse=a;
    num=num/10;
    
}


printf("The reverse of the number is %d",reverse);

return 0 ;
}