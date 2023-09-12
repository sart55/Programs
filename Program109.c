//  Row         4
// Columns      4


/*   



*/ 


#include<stdio.h>


void Display(int iRow, int iCol)
{


    for(i=1; i<= iRow; i++)
    {
        for(j=1; j<=iCol; j++)
        {
            if(j==i)
            {
                printf("%d\t",i);
            }
            else
            {
                printf("*\t");
            }
        }
       
        printf("\n");

    }


  
}

int main()
{
    int iValue = 0,iValue2 = 0;

    printf("Enter number of rows \n");
    scanf("%d",&iValue);

    printf("Enter number of Columns \n");
    scanf("%d",&iValue2);

    Display(iValue,iValue2);

    return 0;
}