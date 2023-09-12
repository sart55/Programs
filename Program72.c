// accept N numbers from user and give its average(mean)



#include <stdio.h>
#include <stdlib.h>    // for malloc 


float Average(int Arr[], int iSize)
{

 int iSum = 0, iCnt = 0;

 for(iCnt = 0; iCnt < iSize; iCnt++)
 {
    iSum = iSum + Arr[iCnt];
 }

 return(iSum / iSize);  // (150 / 5)  = 30.00


}



int main()
{

 int *ptr = NULL;
 int iLength = 0, i = 0;
 float fRet= 0.0f;

 printf("Enter the number of elements: ");
 scanf("%d",&iLength);

    ptr = (int *)malloc(iLength * sizeof(int));
//  ptr = (int*)malloc(5 * 4)

 printf("Enter the numbers :");
 for(i = 0; i<iLength; i++)
 {
    scanf("%d",&ptr[i]);
 }
 
 fRet = Average(ptr, iLength);


 printf("Average of entered numbers are : %f\n",fRet);


     free(ptr);  // Recource Deallocation
 //  free(500)

    return 0;
}