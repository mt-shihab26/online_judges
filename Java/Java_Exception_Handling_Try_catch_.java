import java.util.Scanner;

public class Solution {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);

        try {
            int x = input.nextInt();
            int y = input.nextInt();
            System.out.println(x / y);
        } catch (ArithmeticException ex) {
            System.out.println("java.lang.ArithmeticException: / by zero");
        } catch (Exception ex) {
            System.out.println("java.util.InputMismatchException");
        }
    }
}