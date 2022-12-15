#include<stdio.h>
int main()
{ int i,n,x;
printf("\nEnter the degree of polygonial: ",n);
scanf("%d",&n);
int arr[n+1];
for ( i=n;i>=0;i--)
{
    printf("\n Enter the cofficient of x^%d",i);
    scanf("%d",&arr[i]);
}
printf("\n Enter the value of x");
scanf("%d",&x);
int sum =0;
for ( i=n;i>=0;i--)
{
    sum = sum +arr[i]*x;
}
sum = sum +arr[0];
printf("value of the polygnomial is =%d",sum);
return 0;


   
}
