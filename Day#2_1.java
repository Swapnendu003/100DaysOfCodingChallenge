import java.util.Scanner;
class trailing0
{
    /**
     * @param args
     */
    public static void main (String[] args)
{int i;
    int s=0;
    Scanner sc= new Scanner(System.in);
    System.out.println("Enter the number for which you need the trailing zeros");
    int a= sc.nextInt();
    for ( i=5; i<=a; i=i*5)
    {
s= s+(a/i);
    }
System.out.println(s);
}
}