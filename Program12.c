#include <stdio.h>
#include <stdbool.h>



bool IsCapitalx(char ch)
{
   if((ch >='A') && (ch <='Z'))
   {
     return true;
   }
   else
   {
      return false;
   }
}




int main()
{

  char cValue ='\0';
  bool bRet = false;

  printf("Please enter one character\n");
  scanf("%c",&cValue);


  bRet= IsCapitalx(cValue);

  if(bRet == true)
  {

   printf("%c is a Capital case letter\n",cValue);
  }

  else
  {
    printf("%c is a not a Capital case letter\n",cValue);
  }
 

   return 0;
}