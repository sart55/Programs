import java.util.*;

class ArrayX
{
  public int Arr[];

  public ArrayX(int iSize)
  {
    Arr = new int[iSize];
  }

  public void Accept()
  {
    Scanner  sobj = new Scanner(System.in);

    System.out.println("Please enter "+ Arr.length + "elements");
    for(int iCnt = 0; iCnt < Arr.length; iCnt++)
    {
      System.out.println("Enter the elements no : "+(iCnt+1));
      Arr[iCnt] = sobj.nextInt();
    }
  }

  public void Display()
  {
    System.out.println("Elements of array are : ");

    for(int iCnt=0; iCnt < Arr.length; iCnt++)
    {
      System.out.println("Elements are : "+ Arr[iCnt]+"\t");
    }
  }
}

class MarvellousX extends ArrayX
{
  public MarvellousX(int iSize)
  {
    super(iSize);
  }
  void Reverse()
  {
    int iStart = 0, iEnd = Arr.length-1, iTemp = 0;

    while(iStart < iEnd)
    {
      iTemp = Arr[iStart];
      Arr[iStart] = Arr[iEnd];
      Arr[iEnd] = iTemp;

      iStart++;
      iEnd--;
    }
  }
} 
class Program265
{
  public static void main(String ar[])
  {
    Scanner sobj = new Scanner(System.in);

    System.out.println("Enter the size of array that you want to create ");
    int iSize = sobj.nextInt();

    MarvellousX obj = new MarvellousX(iSize);

    obj.Accept();


    obj.Reverse();
    System.out.println("Array after reverse operation : ");
    obj.Display();
  }
} 