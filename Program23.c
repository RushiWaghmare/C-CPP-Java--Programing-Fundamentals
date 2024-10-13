#include<stdio.h>
/*
    8 = 9:30
    9 = 10:30
    10 = 11:30

*/

void DisplayTimeTable(int iStandard)
{
   switch(iStandard)
   {
    case 8:
        printf("Your exam is at 9.30AM\n");
        break;
    case 9:
        printf("Your exam is at 10.30AM\n");
        break;
    case 10:
        printf("Your exam is at 11.30AM\n");
        break;
    
    default:
        printf("Sorry we dont have the information about your standard\n");
        break;
   }

   
}
int main()
{
    int iStd = 0;
    printf("Enter your Standard \n");
    scanf("%d",&iStd);

    DisplayTimeTable(iStd);


    return 0;
}