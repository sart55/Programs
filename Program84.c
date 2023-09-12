#include <stdio.h>
#include <stdlib.h>


void DisplayReverse (int Arr[] , int iSize)
{
 
  int iCnt = 0;

  printf("Reverse number are:\n");
  for(iCnt = iSize-1; iCnt >= 0; iCnt--) 
  {
    printf("%d\n",Arr[iCnt]);
  }



}


int main()
{
  int iValue = 0, i = 0;
  int *ptr = NULL;

  printf("Enter the number of Elements :\n");
  scanf("%d",&iValue);

  ptr = (int *)malloc(iValue * sizeof(int));

  printf("Enter the Elements:\n");
  for(i = 0; i < iValue; i++)
  {
    scanf("%d",&ptr[i]);
  }

  DisplayReverse(ptr, iValue);



    return 0;
}