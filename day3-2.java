
class rev
{
  static int c= 5;
    static void reverse ()
    {
        if (c==0)
        return;
        else
        System.out.print (c);
        c--;
        reverse ();
    }
public static void main (String[] args)
{
    reverse();

}
}

