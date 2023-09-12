#include<iostream>
using namespace std;

template <class T>

T Additon(T Arr[], int iSize)
{
   int iCnt = 0;
   T sum = 0;

   for(iCnt = 0; iCnt < iSize; iCnt++)
   {
      sum = sum + Arr[iCnt];
   }

   return sum;
}

int main()
{
   int iData[] = {10,20,30,40};
   int iRet = 0;
   double fRet = 0.0;

   iRet = Additon(iData,4);
   cout<<"Addition of integer : "<<iRet<<"\n";

   float dData[] = {10.11,20.12,30.13,40.14};

   fRet = Additon(dData,4);

   cout<<"Addition of float : "<<fRet<<"\n";
   return 0;
}