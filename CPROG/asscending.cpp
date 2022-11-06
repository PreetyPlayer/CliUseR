#include<iostream>
#include<string.h>
using namespace std;
int main()
{
char value[30];
cin >> value;
int n=strlen(value);
char temp;
for(int i=0;i<n;i++)
{
for(int j=i+1;j<n;j++)
{
if(value[i]>value[j])
{
temp=value[i];
value[i]=value[j];    // swapping method
value[j]=temp;
}
}
}
cout << value;
}
