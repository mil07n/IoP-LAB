#include <stdio.h>
int main()
{
    int n;
    printf("Enter triangle size:\n");
    scanf("%d",&n);
    for(int i=n;i>0;i=i-2)
    {
        for(int j=1;j<i;j++)
        {
            printf(" ");
        }
        for(int k=1;k<=n-i+1;k++)
        {
            printf("* ");
        }
        printf("\n");
    }
        for(int y=n;y>0;y=y-2)
        {
           
            if(n%2==0)
            {
              for(int l=1;l<=n-y+3;l++)
            {
             printf(" ");
            }
                 for(int m=1;m<y-2;m++)
            {
                printf("* ");
            }
            }

            else{
                 for(int l=1;l<=n-y+2;l++)
            {
             printf(" ");
            }
                 for(int m=1;m<y-1;m++)
            {
                printf("* ");

            }
            }
           printf("\n");
        }
    return 0;
}