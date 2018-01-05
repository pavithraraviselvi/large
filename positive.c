#include<stdio.h>
#include<conio.h>
void main()
{
int n;
printf("\nEnter the integer:");
scanf("%d",&n);
if(n<=0)
{
if(n==0)
{
printf("The given number is zero");
}
else
{
printf("The given number is negative");
}
}
else
{
printf("The given number is positive");
}
}
