#include<stdio.h>
int m=0;


int TOH(int n,char source,char temp,char dest);

int TOH(int n,char source,char temp,char dest)
{
    if(n==1)
    {
        printf("Disc moved from source to destination\n");
        m++;
        return 0;
    }
    TOH(n-1,source,dest,temp);
        printf("Disc %d moved from %c to %c\n",n-1,source,dest);
        m++;

     TOH(n-1,temp,source,dest);
     //printf("Disc %d moved from %c to %c\n",n-1,source,dest);
    // m++;
     //n--;

}

void main()
{
    int nod;
    printf("Enter number of discs:");
    scanf("%d",&nod);
    //fflush(stdin);
    char s='A',d='C',t='B';
    TOH(nod,s,t,d);
    printf("Total number of moves required is:%d",m);
}
