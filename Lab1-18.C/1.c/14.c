#include<stdio.h>
int n;
int main()
{
int i;
printf("Enter the Size of Array :");
scanf("%d",&n);
int a[n];
printf("Enter Array's element:");
for(i=0; i<n; i++)
{
scanf("%d",&a[i]);
}
mergesort(a,0,n-1);

printf("\nSorted array is :\n");
for(i=0; i<n; i++)
printf("%d ",a[i]);
return 0;
}

void mergesort(int a[],int i,int j)
{
int mid;
if(i<j)
{
mid=(i+j)/2;
mergesort(a,i,mid);
mergesort(a,mid+1,j);

merge(a,i,mid,mid+1,j);
}
}

void merge(int a[],int i1,int mid,int i2,int j2)
{
int temp[5];
int i,j,k;
i=i1;
j=i2;
k=0;
while(i<=mid && j<=j2)
{
if(a[i]<a[j])
{
temp[k]=a[i];
k++;
i++;
}
else
{
temp[k]=a[j];
k++;
j++;
}
}
while(i<=mid)
temp[k++]=a[i++];
while(j<=j2)
temp[k++]=a[j++];

for(i=i1,j=0; i<=j2; i++,j++)
a[i]=temp[j];
}
