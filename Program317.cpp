#include<iostream>
using namespace std;

template <class T>

struct node
{
    T data;
    struct node *next;
};

template <class T>
class SinglyLL
{
  public:
    struct node<T> * First;

    SinglyLL();
    void InsertFirst(T no);
    void Display();
    int Count();

};

template <class T>
SinglyLL <T>:: SinglyLL()
{
  First = NULL;
}

template <class T>
void SinglyLL<T> :: InsertFirst(T no)
{
    struct node<T> * newn= new node<T>;
    newn->data = no;
    newn->next = NULL;

    if(First == NULL)
    {
       First = newn;
    }
    else
    {
        newn->next = First;
        First = newn;
    }
}

template <class T>
void SinglyLL<T>:: Display()
{
    struct node<T> * temp = First;

    while(temp != NULL)
    {
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    cout<<"\n";
}

template <class T>
int SinglyLL<T> :: Count()
{
    struct node<T> * temp = First;
    int iCnt = 0;

    while(temp != NULL)
    {
        iCnt++;
        temp = temp->next;
    }

    return iCnt;
}
int main()
{
    SinglyLL <int>obj;
    obj.InsertFirst(101);
    obj.InsertFirst(51);
    obj.InsertFirst(21);
    obj.InsertFirst(11);

    obj.Display();

    int iRet = obj.Count();

    cout<<"Number of nodes are : "<<iRet<<"\n";

    SinglyLL <char>obj1;
    obj1.InsertFirst('D');
    obj1.InsertFirst('C');
    obj1.InsertFirst('B');
    obj1.InsertFirst('A');

    obj1.Display();

    iRet = obj1.Count();

    cout<<"Number of nodes are : "<<iRet<<"\n";

    SinglyLL <float>obj3;
    obj3.InsertFirst(11.21f);
    obj3.InsertFirst(05.5f);


    obj3.Display();

    iRet = obj3.Count();

    cout<<"Number of nodes are : "<<iRet<<"\n";


    SinglyLL <double>obj4;
    obj4.InsertFirst(10.1010101);
    obj4.InsertFirst(05.050505);


    obj4.Display();

    iRet = obj4.Count();

    cout<<"Number of nodes are : "<<iRet<<"\n";



    return 0;
}