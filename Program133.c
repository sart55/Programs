#include <stdio.h>




int main()
{

  char Arr[50];
  int iCnt = 0;

  printf("Please enter a name:\n");
  scanf("%[^'\n']s",Arr);

  printf("Your name is: %s\n",Arr);

  

   return 0;
}