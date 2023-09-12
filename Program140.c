#include<stdio.h>

int Countch(char str[])
{
    int iCnt = 0,i = 0;

     while(str[i] != '\0')
    {
        if(str[i]=='a')
        {
            iCnt++;
        }

        i++;
    }
    return iCnt;

    
}

int main()
{   
    char Arr[10];
    int iRet = 0;

    printf("Please enter string\n");
    scanf("%[^'\n']s",Arr);

    iRet = Countch(Arr); // strlenX(100)

    printf("Frequency of a is: %d\n",iRet);

    return 0;
}