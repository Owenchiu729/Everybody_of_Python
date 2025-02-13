#include<stdio.h>
#include<stdlib.h>
int main(void)
{
int a,b;
printf("Please enter two integers, separated by commas.");
scanf("%d,%d",&a,&b);/*Please enter two integers, please separate the values ​​with commas.*/
printf("%d+%d=%d\n",a,b,a+b); /*Calculate the total and print out the contents.*/
getchar();
return 0;
}