#include<stdio.h>
int main()
{
int i,n,count=0;
printf("\nEnter the number:");
scanf("%d",&n);
for(i=2;i<n;i++)
{
if(n%i==0)
{
count++;
}
}
if(count==0)
{
printf("\nPrime number");
}
else
{
printf("\nComposite number");
}
return 0;
}
