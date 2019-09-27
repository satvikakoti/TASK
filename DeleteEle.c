#include<stdio.h>

void main()
{
    int n,i,j,count=0;
    printf("Enter size of array:");
    scanf("%d",&n);
    int ar[n];
    printf("Enter elements:");
    for(i=0;i<n;i++)
        scanf("%d",&ar[i]);
    for(i=0;i<n;i++)
    {
        if(ar[i+1]>ar[i])
        {
            count++;
            for(j=i;j<n;j++)
                ar[j]=ar[j+1];
        }
    }
    printf("The new array is:");
    for(i=0;i<n-count;i++)
        printf("%d ",ar[i]);
}
