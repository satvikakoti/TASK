#include<stdio.h>
#include<string.h>

void main()
{
    char  str[200],ch,substr[100],word[100]=" ";
    int n,flag=0,i;
    printf("Enter sentence:");
    gets(str);
    n=strlen(str);
    printf("Enter string to be searched:");
    gets(substr);
    for(i=0;i<n;i++)
    {
        if(str[i]!=' ')
        {
            for(j=0;j<;j++)
             word[]=word[]+ch;
        }
        else
        {
            if(strcpy(word,substr)==0)
            {
                flag=1;
                break;
            }
            word[100]=" ";
        }

    }
    if(flag==1)
        printf("String found!!");
    else
        printf("String not found!!");
}
