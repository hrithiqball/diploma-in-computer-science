import java.util.Scanner;

public class week1 {
    public static void main(String[] args) {
        int int1, int2, total;
        Scanner sc = new Scanner(System.in);

        System.out.println("Input first number: ");
        int1 = sc.nextInt();

        System.out.println("Input second number: ");
        int2 = sc.nextInt();

        sc.close();
        total = int1 + int2;
        System.out.println("Total is " + total);
    }
}
