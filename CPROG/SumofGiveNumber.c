#include<stdio.h>
int main()
{
long num,add=0;
printf("Enter the number :");
scanf("%ld",&num);
while(0<num)
{
add+=num%10;
num/=10;
}
printf("\nSum Of Digits :%ld \n",add);
}
