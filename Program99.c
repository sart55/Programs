//  Row         4
// Columns      4

#include<stdio.h>

void Display(int iNo)
{
    int iCnt = 0, i = 0;
    char ch = 'a';



    if(iNo < 0)
    {
        iNo = -iNo;
    }
    
    for(i = 1; i <= 3; i++)
    {
        for(iCnt = 1;iCnt <= iNo; iCnt++)
        {
            printf("*\t");
        }
        printf("\n");
    }


    printf("\n");
}

int main()
{
    int iValue = 0;

    printf("Enter number\n");
    scanf("%d",&iValue);

    Display(iValue);

    return 0;
}