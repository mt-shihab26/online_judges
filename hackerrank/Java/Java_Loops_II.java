import java.io.*;
import java.util.*;

public class Solution {

    public static void main(String[] args) {

        Scanner input = new Scanner(System.in);

        int t = input.nextInt(), a, b, n, i, vl;
        while (t-- != 0) {
            a = input.nextInt(); b = input.nextInt(); n = input.nextInt();

            vl = a + b;
            System.out.print(vl + " ");
            for (i = 1; i < n; i++) {
                vl += (Math.pow(2, i) * b);
                System.out.print(vl + " ");
            }
            System.out.println();
        }

    }
}