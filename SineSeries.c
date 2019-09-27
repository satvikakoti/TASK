#include<stdio.h>
#include<math.h>

void main()
{
    int n,i,j,k,fact=1,angle;
    float sum=0,term,x;
    printf("Enter value of angle in degrees:");
    scanf("%d",&angle);
    x=(angle*3.14)/180;
    printf("Enter value of n:");
    scanf("%d",&n);
    for(i=1,k=1;i<=n;i++,k=k+2)
    {
        for(j=k;j>=1;j--)
            fact=fact*j;
        term=(pow(x,k))/fact;
        if(i%2==0)
            sum=sum-term;
        else
            sum=sum+term;
    }
    printf("%f",sum);
}
