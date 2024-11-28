#include <stdio.h>
int swap(int x , int y);
int main(){
    int x,y;
    printf("Enter number : ");
    scanf("%d%d",&x,&y);
    
    printf("Value of X = %d \n Value of Y = %d",x,y);
    swap(x,y);
    printf("\n Modified Value of X = %d \n Modified Value of Y = %d",x,y);
    return 0;
}
int swap(int x,int y)
{
 int a;
 a=x;
 x=y;
 y=a;
}