#include<stdio.h>
int main()
{
    long num,rev=0;
    printf("Enter the numbers :");
    scanf("%ld",&num);
    while(num>0)
    {
    rev=rev*10+num%10;
    num/=10;
    }
    printf("\n%ld\n",rev);  
}
