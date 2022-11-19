#include<stdio.h>
int main()
{
    int n,i;
    printf("Enter the  Number of element : ");
    scanf("%d",&n);
    int a[n];
    printf("\n\n");
    printf("Enter the Element of Array \n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
       int b,c=0;
    printf("Enter the Value That you want to Search in the Linked List : ");
    scanf("%d",&b);
        for (int i = 0; i < n; i++) {
            if (a[i]==b) {
                printf("The Data is Found ,position is %d",i+1);
                c++;
                break;
            }
        }
        if(c==0)
        {
            printf("The Data is not Found !!! ");
        }
}
