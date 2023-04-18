import java.util.Scanner;
class sumn {
    static void nsum(int i, int s)
    {
        if (i<0)
        {
            System.out.print(s);
            return;
        }
        nsum(i-1, s+i);
    }
    public static void main (String[] args)
    {
        Scanner sc= new Scanner (System.in);
        int n= sc.nextInt();
        nsum (n,0);
    }
}
