#include <stdio.h>
#include <string.h>
#define max_employee 50
struct employee_data
{
    int employee_number;
    char employee_name[100];
    float basic_pay;
};
int main()
{
    struct employee_data employee[max_employee];
    struct employee_data *ptr;
    int n, i;
    printf("No. of employees\n");
    scanf("%d", &n);
    if (n > max_employee || n <= 0)
    {
        printf("Invalid no. of employees\n");
        return 1;
    }
    ptr = employee;
    for (int i = 0; i < n; i++)
    {
        printf("Details of Employee %d:\n", i + 1);
        printf("Employee No.: ");
        scanf("%d", &ptr->employee_number);
        printf("Name: ");
        scanf(" %s", &ptr->employee_name);
        printf("Pay: ");
        scanf("%f", &ptr->basic_pay);
        ptr++;
    }
    ptr = employee;
    printf("\nEmployee Details:\n");
    for (int i = 0; i < n; i++)
    {
        printf("Employee No. :%d\n", ptr->employee_number);
        printf("Name :%s\n", ptr->employee_name);
        printf("pay :%f\n", ptr->basic_pay);
        ptr++;
    }
    return 0;
}