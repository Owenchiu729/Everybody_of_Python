/*prog4_4,印出特定格式*/
#include <stdio.h>
#include <stdlib.h>
int main(void)
{
int num1=32, num2=1024;
float num3=12.3478f;
printf("num1=%6dKm＼n",num1);/*以％6d格式印出num1*/
printf("num2=%-6dKm＼n",num2);/*以％-6d格式印出num1*/
printf("num3=%6.2fMile＼n",num3);/*以％6.2f格式印出num1*/
system("pause");
return 0;
}