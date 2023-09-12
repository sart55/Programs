#include <iostream>
using namespace std;


class Arithmatic
{
  public:
     int iValue1;
     int iValue2;

     Arithmatic()       // Deafault construcor
     {
      iValue1 = 0;
      iValue2 = 0;
     }


     Arithmatic(int A, int B)   // Paarameterised Contrutor
     {
      iValue1 = A;
      iValue2 = B;
     }


     int Addition()
     {
      int iAdd = 0;

      iAdd = iValue1 + iValue2;
      return iAdd;
     }
};


int main()
{
   int iRet = 0;

   Arithmatic obj1;
   Arithmatic obj2(10,11);
   Arithmatic obj3(20,21);


   iRet = obj1.Addition();
   cout<<"Addition is:"<<iRet<<"\n";       //0


   iRet = obj2.Addition();
   cout<<"Addition is:"<<iRet<<"\n";       //21 

    iRet = obj3.Addition();
   cout<<"Addition is:"<<iRet<<"\n";       //41

    return 0;

}