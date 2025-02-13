#include<stdio.h>
#include<stdlib.h>
int main (void)
{
    int   num;
    printf("Please enter an integer:");
    scanf("%d",&num);/*Enter an integer from the keyboard and assign it to num for storage*/
    printf("num=%d\n",num);
    getchar();
    return 0;
}