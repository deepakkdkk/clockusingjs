#include<stdio.h>
int stringcompare(char[], char[]);  // function prototype declaration
int comparisonstring()
{
    char aj1[100], aj2[100];
    int compare;
    printf("\n\nEnter 1st string: ");
    gets(aj1);
    printf("\n\nEnter 2nd string: ");
    gets(aj2);
    compare = stringcompare(aj1, aj2);  // function call
        if(compare == 1)
        printf("\n\nBoth the strings are exactly same.\n\n");
     else
        printf("\n\nBoth the strings are different.\n");
    return 0;
}
int stringcompare(char mj1[], char mj2[])  // function definition
{
    int j = 0, flag = 0;
    while(mj1[j] != '\0' && mj2[j] != '\0') // until atleast one string ends
    {     
        if(mj1[j] != mj2[j]) 
        {
            flag = 1;
            break;
        }
        j++;
    }
    if(flag == 0 && mj1[j] == '\0' && mj2[j] == '\0')
        return 1;
    else
        return 0;
}
