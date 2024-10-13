/*
Step1 : Understand the problem Statement
Step2 : Write the algorithm
Step3 : Decide the programing language
Step4 : Write the program
Step5 : Test the program
*/

/*
    Problem Statement :
    Write a program which is used to perform ADDITION of two numbers.

*/
/*
    Step1 : Understand the problem Statement
    User is going to enter the data in decima format.
    If enter data is negatice we have to convert it to positive value.
*/

/*
    Step2 : Write the algorithm

    START
        Accept first input
        Accept second input
        If any of the inout is neagtive then convert it into positive
        Perform the addition of that accepted values
        Display the addition
    STOP
*/

/* 
    Step3 : Decide the programing language
    According to the porblem statement we select C Programming.
*/

/*
     Step4 : Write the program
*/


#include<stdio.h>

float Addition (float fValue1, float fValue2)
{
    float fAdd = 0.0f;
    fAdd = fValue1 + fValue2;
    return fAdd;

}

int main ()
{
    float fNo1 = 0.0f, fNo2 = 0.0f, fAns = 0.0f;

    printf("Enter the first input : \n");
    scanf("%f",&fNo1);

    printf("Enter the second input : \n");
    scanf("%f",&fNo2);

    fAns = Addition(fNo1, fNo2);

    printf("Addition is : %f",fAns);


    return 0;
}