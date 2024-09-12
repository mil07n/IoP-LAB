#include <stdio.h>

int main(void)
{
    //Declaring factors of gross salary
    int base,rent,transport,fbp,bonus,incometax,fund,gross;
    printf("Enter Base Salary:");
    scanf("%d",&base);
    printf("Enter House Rent Allowance:");
    scanf("%d",&rent);
    printf("Enter Transport Allowance:");
    scanf("%d",&transport);
    printf("Enter FBP Allowance:");
    scanf("%d",&fbp);
    printf("Enter Income tax:");
    scanf("%d",&incometax);
    printf("Fund:\n");
    scanf("%d",&fund);
    // Calculating Gross salary excluding Income tax and Fund
    gross = base+rent+transport+fbp+bonus;
    printf("Gross Salary:%d", gross);
}