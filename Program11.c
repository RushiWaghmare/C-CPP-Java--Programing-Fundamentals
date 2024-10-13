#include<stdio.h>

float Area (float fValue)
{
    float fresult = 0.0f;
    fresult = 3.14 * fValue * fValue;
    return fresult;
}
int main()
{
    float fRadius = 0.0f;
    float fArea = 0.0f;

    printf("Enter the radius of Circle\n");
    scanf("%f",&fRadius);

    fArea = Area(fRadius);

    printf("The Area of Circle is: %f\n",fArea);

    return 0;
}