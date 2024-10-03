#include <stdio.h>
int main(){
    int x[3],y[3],z[3];
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            if(i==0)
            {
                 printf("matrix:");
                scanf("%d",&x[j]);
            }
            else if(i==1)
            {
                 printf("matrix:");
                scanf("%d",&y[j]);
            }
            else
            {
                 printf("matrix:");
                scanf("%d",&z[j]);
            }
        }
    }
    printf("matrix\n");
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            if(i==0)
            {
                printf("%d\t",x[j]);
            }
            else if(i==1)
            {
                printf("%d\t",y[j]);
            }
            else
            {
                printf("%d\t",z[j]);
            }
        }
        printf("\n");
    }
    printf("\ntranspose\n");
    for(int j=0;j<3;j++)
    {
        for(int i=0;i<3;i++)
        {
            if(i==0)
            {
                printf("%d\t",x[j]);
            }
            else if(i==1)
            {
                printf("%d\t",y[j]);
            }
            else
            {
                printf("%d\t",z[j]);
            }
        }
        printf("\n");
    }
    return 0;
}