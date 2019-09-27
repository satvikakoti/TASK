#include<stdio.h>
int genericRoot(int n);
//without recursion
void main()
{
   int num,d,sum=0,m;
   printf("Enter the number:\n");
    scanf("%d",&num);
    printf("Without Recursion!!\n");
    num=m;
   while(num>0)
   {
       d=num%10;
       sum=sum+d;
        num=num/10;
        if(sum>=10&&num==0)
       {
           num=sum;
           sum=0;
       }

    }
   printf("%d\n",sum);
    genericRoot(m);
   }

int genericRoot(int n)
{
    int add=0,dig;
    printf("With Recursion!!\n");
    while(n>0)
   {
       dig=n%10;
       add=add+dig;
        n=n/10;
        if(add>=10&&n==0)
       {
           n=add;
           add=0;
       }

    }
    printf("%d\n",add);
    return 0;
}
