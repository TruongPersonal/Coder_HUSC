import java.util.Scanner;

public class Java {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        int a, b;
        a = input.nextInt();     
        b = input.nextInt();
        long sum = a + b, difference = a - b, multiply = a * b, quotient = a / b, modulo = a % b;
        System.out.println(a + " + " + b + " = " + sum);
        System.out.println(a + " - " + b + " = " + difference);
        System.out.println(a + " * " + b + " = " + multiply);
        System.out.println(a + " / " + b + " = " + quotient);
        System.out.println(a + " % " + b + " = " + modulo);
        input.close();
    }
}