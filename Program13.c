#include<stdio.h>

float Percentage (int iTotal, int iObtained)
{
    float fResult = 0.0f;
    fResult = ( (float)iObtained / (float)iTotal ) * 100;
    return fResult;

}
int main()
{
    int iTotalMarks = 0, iObtainedMarks = 0;
    float fPercentage = 0.0f;

    printf("Enter Total Marks\n");
    scanf("%d", &iTotalMarks);

    printf("Enter Obtained Marks\n");
    scanf("%d", &iObtainedMarks);

    fPercentage = Percentage(iTotalMarks, iObtainedMarks);

    printf("The total percentage of given marks is: %f\n", fPercentage);
    
    return 0;
}