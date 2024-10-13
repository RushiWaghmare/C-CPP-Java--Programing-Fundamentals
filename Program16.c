#include<stdio.h>
/* 
    START
        Accept the percentage form user
        If percentage areless than 40 then dispaly FAIL
        and if it is greater than or equal to 40 nthen display PASS

    STOP

*/
void DisplayResult(float fPercentage)
{
    if (fPercentage>100.0f) //Filter
    {
        printf("Invalid percentage. Please enter value in the range 0 t0 100\n");
        return;
    }
    if(fPercentage >= 40.00f)
    {
        printf("PASS\n");
    }
    else
    {
        printf("FAIL\n");
    }
}
int main()
{
    float fValue= 0.0f;

    printf("Enter you percentage\n");
    scanf("%f",&fValue);

    DisplayResult(fValue);

    return 0;

}