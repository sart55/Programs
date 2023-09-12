#include <iostream>
using namespace std;


class Arithmatic
{
  public:
     int Addition(int iValue1, int iValue2)
     {
        int iAdd = 0;
        iAdd = iValue1 + iValue2;
        return iAdd;
     }

};


int main()
{

   int ino1 = 0,ino2 = 0,iAns = 0;
   cout<<"Enter the first number"<<"\n";
   cin>>ino1;

   cout<<"Enter the second number"<<"\n";
   cin>>ino2;

   Arithmatic obj;

   iAns = obj.Addition(ino1,ino2);

   cout<<"Addition is:"<<iAns<<"\n";
    return 0;

}