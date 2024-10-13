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

/////////////////////////////////////////////////
//
//  Funtion Name : Addition()       
//  Description :  It is used to perform the addition of 2 fload values
//  Input :        Float, Float 
//  Output :       Float
//  Author :       Rushikesh Ratnakar Waghmare 
//  Date :         06/10/2024
//  
/////////////////////////////////////////////////

float Addition (float fValue1, float fValue2)
{
    float fAdd = 0.0f;                              // Local variable for result

    //Updator
    if (fValue1 < 0.0f)
    {
        fValue1 = -fValue1;

    }
    if (fValue2 < 0.0f)
    {
        fValue2 = -fValue2;

    }

    fAdd = fValue1 + fValue2;                       // Business logic
    return fAdd;

}

/////////////////////////////////////////////////
//
//  This application is used to perform addition of 2 numbers
//
/////////////////////////////////////////////////

int main ()
{
    float fNo1 = 0.0f, fNo2 = 0.0f, fAns = 0.0f;    // Local variables for input

    printf("Enter the first input : \n");
    scanf("%f",&fNo1);

    printf("Enter the second input : \n");
    scanf("%f",&fNo2);

    fAns = Addition(fNo1, fNo2);                    // Function call

    printf("Addition is : %f",fAns);

    return 0;
}

/*
    Step5 : Test the program
*/

/*
    Testcase 1
    Enter the first input :
    -12.5
    Enter the second input :
    -10.5
    Addition is : 23.000000

    Testcase 2
    Enter the first input :
    10.0
    Enter the second input :
    -20.0
    Addition is : 30.000000

    Testcase 3
    Enter the first input :
    -10.0
    Enter the second input :
    20.0
    Addition is : 30.000000
*/