#include <iostream>
using namespace std;

class Numbers
{

  public:
    int iNo;


    Numbers(int i)
    {
      iNo = i;
    }


    int Factorial()
    {
      int iCnt = 0;
      int iResult = 1;

      for(iCnt = 1; iCnt<= iNo; iCnt++)
      {
         iResult = iResult * iCnt;
      }

      return iResult;

    }

};

int main()
{

 int iValue = 0;
 int iRet = 0;

 cout<<"Enter a number:"<<"\n";
 cin>>iValue;

 Numbers obj1(iValue);

 iRet = obj1.Factorial();


 cout<<"Factorial is "<<iRet<<"\n";


   return 0;
}