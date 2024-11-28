#include <stdio.h>
void odd(int a);
int main(){
    int a;
    printf("Enter A number:   ");
    scanf("%d",&a);
    odd(a) ;
    

}

void odd(int a )
{
    
    if(a%2==0)
    {
        printf("Number is  Even");

    }
    else
    {
        printf("Number is Odd");
    }
    
}