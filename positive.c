#include<stdio.h>
void main()
{
int number;
printf("Enter the number");
scanf("%d" &number);
if (number<=0)
{
if (number==0)
printf("you entered 0");
else
printf ("you entered a negative number");
}
else
printf("you entered a positive number");
return 0;
}
