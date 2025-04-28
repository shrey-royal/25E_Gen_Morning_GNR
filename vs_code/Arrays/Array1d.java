import java.util.Scanner;

public class Array1d {
    public static void main(String[] args) {
        int[] arr = new int[10];
        Scanner sc = new Scanner(System.in);
        
        for (int i = 0; i < arr.length; i++) {
            System.out.print("Enter arr["+i+"]: ");
            arr[i] = sc.nextInt();
        }

        System.out.print("\nArray["+arr.length+"]: { ");
        for (int i = 0; i < arr.length; i++) {
            System.out.print(arr[i] + ", ");
        }
        System.out.println("\b\b }");
        
        sc.close();
    }
}
