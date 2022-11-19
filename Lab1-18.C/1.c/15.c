#include<stdio.h>
void Binarysearch(int arr[],int num,int f, int l)
{

    if(f>l)
    {
        printf("Number is notfound");
    }
    else
    {
        int mid;
        mid=(f+l)/2;
        if(arr[mid]==num)
        {
            printf("Elemnet is found at %d", mid+1);
            exit(0);
        }
        else if(arr[mid]>num)
        {
            Binarysearch(arr,num,f,mid-1);
        }
        else
        {
            Binarysearch(arr,num,mid+1,l);
        }
    }
}
int main()
{

    int n,i;
    printf("Enter the  Number of arr : ");
    scanf("%d",&n);
    int arr[n];
    int f=0;
    int l=n;
    printf("\n\n");
    printf("Enter the Element of Array \n");
    for(i=0; i<n; i++)
    {
        scanf("%d",&arr[i]);
    }
    int num;
    printf ("Enter the value want to search \n");
    scanf("%d",&num);
    Binarysearch(arr,num,f,l);

}
