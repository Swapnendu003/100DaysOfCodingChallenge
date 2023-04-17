import java.util.Scanner;
public class euclidgcd 
{
    public static void main (String[] args)
    {
Scanner sc= new Scanner(System.in);
System.out.println ("Enter two numbers for which you need the gcd");
int a= sc.nextInt();
int b= sc.nextInt();
System.out.println (gcd (a,b));
    }

    static int gcd (int a, int b)
    {
        if (b==0)
        return a;
        else 
        return gcd (b, a%b);
    }
}