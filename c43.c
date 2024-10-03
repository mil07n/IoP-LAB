#include <stdio.h>
int main()
{
    int  a, b, c, d,e;
    printf("sales done: ");
    scanf("%d",&a);
    if(a<=500)
    {b=5*a/100;
        printf("commission is %d ",b);}
    else if(a>500 && a<=2000)
    {c=10*a/100+35;
        printf("commission is %d ",c);}
else if(a>2000 && a<=5000)
    {d=12*a/100+185;
        printf("commission is %d ",d);}
        else
        {
           e=12.5*a/100;
           printf("commission is%d",e);
        }

    return 0;
}