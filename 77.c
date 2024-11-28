#include <stdio.h>
void palindrome(int num);
int main(){
    int num;
    printf("Enter a Number : ");
    scanf("%d",&num);
    palindrome( num );
    return 0;
}
void palindrome(int num)
{
    int a,q,revnum=0;
    a=num;
    while(a>0)
    {
    q=a%10;
    revnum=revnum*10+q;
    a=a/10;
    }
    if(revnum==num)
    {
        printf("Number is a Palindrome");
    }
    else 
    {
        printf("Number is not a Palindrome");
    }
}