#include <stdio.h>
#include <stdlib.h>


int Minimum(int Arr[] , int iSize)
{

    int iCnt = 0, iMin = Arr[0];

    for(iCnt = 0;iCnt < iSize; iCnt++)
    {
      if(Arr[iCnt] < iMin)
      {
        iMin =Arr[iCnt];
      }
    }

return iMin;



}


int main()
{
  int iValue = 0, i = 0, iRet = 0;
  int *ptr = NULL;

  printf("Enter the number of Elements :\n");
  scanf("%d",&iValue);

  ptr = (int *)malloc(iValue * sizeof(int));

  printf("Enter the Elements:\n");
  for(i = 0; i < iValue; i++)
  {
    scanf("%d",&ptr[i]);
  }

  iRet = Minimum(ptr, iValue);


  printf("Minimum number is : %d",iRet);



    return 0;
}