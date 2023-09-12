#include<stdio.h>
#include<stdbool.h>

bool Check(char *str, char ch)
{
   

    while(*str != '\0')
    {
        if(*str == ch)
        {
          return true;
          break; 
        }
        str++;
    }
  return false;
}

int main()
{
    char Arr[20];
    char cValue = '\0';
    int iRet = 0;
    bool bRet = false;

    printf("Please enter string\n");
    scanf("%[^'\n']s",Arr);

    printf("Please enter the character\n");
    scanf(" %c",&cValue);

    bRet = Check(Arr,cValue);
 
    if(bRet == true)
    {
        printf("Character is present in the string:\n");
    }
    else
    {
        printf("Character is not present in the string\n");
    }
    
    
    return 0;
}