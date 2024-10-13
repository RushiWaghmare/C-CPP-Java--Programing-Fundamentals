#include<stdio.h>
//Iteration approach
void DisplayResult(int iValue)
{ 
    int iCount = 0;
    for (iCount = 1; iCount <= iValue; iCount++)
    {
        printf("Jay Ganesh...\n");
    }
}
int main()
{
    int iFrequency = 0;

    printf("Enter the no of Iteration: \n");
    scanf("%d", &iFrequency);

    if (iFrequency <0)
    {
        printf("Please enter the positive intiger for Iteration!");
    }
    else
    {
        DisplayResult(iFrequency);
    }

    return 0;
}