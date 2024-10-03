#include <stdio.h>
int main(){
    int x[10],y[10],z[10],temp,temp2;
    for(int i=1;i<10;i++)
    {
        printf("Array 1:");
        scanf("%d",&x[i]);
    }
    printf("\n\n");
    for(int j=1;j<10;j++)
    {
        printf("Array 2:");
        scanf("%d",&y[j]);
    }
    printf("\n\n");
    for(int j=1;j<10;j++)
    {
        temp=x[j];
        x[j]=y[j];
        y[j]=temp;
        printf("After swapping Array 1:%d\n",x[j]);
    }

    printf("\n\n");
    for(int i=1;i<10;i++){

        printf("After swapping Array 2:%d\n",y[i]);
    }
    return 0;
}