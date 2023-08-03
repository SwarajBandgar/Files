import java.util.*;

/*  

*/
class Pattern
{
    public void Display(int iNo)
    {
        int iDigit = 0,iTemp1 = iNo,iTemp2 = iNo;

        while(iTemp1 !=0)
        {
            while(iTemp2 != 0)
            {
                iDigit = iNo % 10;
                System.out.print(iDigit+"\t");
                iTemp2 = iTemp2 / 10;
            }
            iTemp2 = iNo;

            System.out.println();
            iTemp1 = iTemp1 / 10;
        }
    }
}
class Program300
{
    public static void main(String a[])
    {
        Pattern pobj = new Pattern();
        Scanner sobj = new Scanner(System.in);

        System.out.print("Enter Number : ");
        int i = sobj.nextInt();

        pobj.Display(i);
    }
}