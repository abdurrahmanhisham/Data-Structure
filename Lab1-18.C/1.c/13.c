#include<stdio.h>
#include<stdlib.h>
int main()
{
int i,j,temp,n;
printf("Enter the Value of Index Number of Array : ");
scanf("%d",&n);
int a[n];
printf("Enter the Value of Array : ");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
for(i=1;i<n;i++)
{
temp=a[i];
j=i-1;
while(j>=0 && a[j]>temp)
{
a[j+1]=a[j];
j--;
}
a[j+1]=temp;
}
printf("The Sorted Array is : ");
for(i=0;i<n;i++)
{
printf("%d ",a[i]);
}
}
