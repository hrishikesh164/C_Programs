#include <stdio.h>
int main()
{
    int age;
    char gender, maritalStatus;

    printf("Enter driver's gender (M/F): ");
    scanf(" %c", &gender);

    printf("Enter driver's age: ");
    scanf("%d", &age);

    if (age < 18)
        printf("Sorry, drivers below 18 years of age are not eligible for insurance.\n");
    else if (gender == 'F')
        printf("Congratulations! Female drivers are eligible for insurance.\n");
    else if (age >= 25)
        printf("Congratulations! Male drivers above 25 years of age are eligible for insurance.\n");
    else if (age >= 20 && age <= 25)
    {
        printf("Are you married? (Y/N): ");
        scanf(" %c", &maritalStatus);
        if (maritalStatus == 'Y' || maritalStatus == 'y')
            printf("Congratulations! Male drivers between 20 and 25 years of age who are married are eligible for insurance.\n");
        else
            printf("Sorry, male drivers between 20 and 25 years of age who are not married are not eligible for insurance.\n");
    }
    else
        printf("Sorry, you do not meet the eligibility criteria for insurance.\n");
    return 0;
}
