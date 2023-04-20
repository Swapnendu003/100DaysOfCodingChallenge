public class reversestring {
    static boolean rev (String s, int i) {
        int n = s.length();
        if (i >= (n/2)) {
            return true;
        }
        if (s.charAt(i) != s.charAt(n-i-1)) {
            return false;
        }
        return rev(s, i+1);
    }
    
    public static void main (String [] args) {
        String s = "MADAM";
        
            System.out.println(rev(s, 0));
    }
}
