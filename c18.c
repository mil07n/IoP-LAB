#include <stdio.h>
int main() 
{
    int a,b,c;
    printf("enter the values of a,b and c:\n");
    scanf("%d%d%d",&a,&b,&c);
    if(a>b)
    {
        if(a>c)
        {
            printf("max. no. is:%d",a);
        }
        else
        {
            printf("max. no. is:%d",c);
        }
    }
    else if(a<b)
    {
        if(b>c)
        {
            printf("max. no. is:%d",b);
        }
        else
        {
            printf("max. no. is :%d",c);
        }
    }
    else
    {
        printf("Either pair or all are qual");
    }
    return 0;
}