#include<stdio.h>
#include<stdlib.h>
int main(void)
{
int a,b;
printf("Please enter two integers");
scanf("%d %d",&a,&b); /*Enter two numbers from the keyboard and set variables a and b*/
printf("%d+%d=%d\n",a,b,a+b); /*Calculate the total combined printout*/
getchar();
return 0;
}