#include<stdio.h>
void vowelornot(char ch)
{
    if ( ch =='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u')
    {
    printf("character is a vowel");
    }
    else
    {
    printf("Not a Vowel");
    }
}
int main ()
{ 
char c;
printf("Enter character");
scanf("%c",&c);
vowelornot(c); 
return 0;
}