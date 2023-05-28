

import java.util.Scanner;
public class rotatearray 
{
        public static void rotate(long a[], int k, int n) 
        {
            int d = k % n;
            long temp[] = new long[d];
            for (int i = 0; i < d; i++) 
            {

                temp[i] = a[i];
            }
            for (int j = d; j < n; j++) 
            {
                a[j - d] = a[j];
            }
            for (int z = n - d; z < n; z++) 
            {
                a[z] = temp[z - (n - d)];
            }
        }
    public static void main(String[] args) 
    {
        Scanner scanner = new Scanner(System.in);

        System.out.print("Enter the size of the array: ");
        int size = scanner.nextInt();

        long[] array = new long[size];

        System.out.println("Enter the elements of the array:");
        for (int i = 0; i < size; i++) {
            array[i] = scanner.nextLong();
        }

        System.out.print("Enter the rotation count: ");
        int rotationCount = scanner.nextInt();

        Solution solution = new Solution();
        solution.rotate(array, rotationCount, size);

        System.out.println("Array after left rotation:");
        for (int i = 0; i < size; i++) {
            System.out.print(array[i] + " ");
        }
    }
}
