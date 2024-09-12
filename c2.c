#include <stdio.h>
int main(void)
{
    //Declaring Subjects, total and Percentage
    float maths,chemistry,physics,biology,english,total,percentage;
    //User input
    printf("Enter Maths marks: ");
    scanf("%f",&maths);
    printf("Enter Chemistry marks: ");
    scanf("%f",&chemistry);
    printf("Enter Physics marks: ");
    scanf("%f",&physics);
    printf("Enter Biology marks: ");
    scanf("%f",&biology);
    printf("Enter English marks: ");
    scanf("%f",&english);
    //Calculating Total marks
    total=maths+chemistry+physics+biology+english;
    printf("Total marks: %.2f\n",total);
    //Calculating Percentage
    percentage=(total/500)*100;
    printf("Percentage: %.2f\n",percentage);
}