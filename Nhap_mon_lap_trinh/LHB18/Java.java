import java.util.Scanner;

public class Java {
    static boolean isPrime(int number) {
        for (int i = 2; i <= Math.sqrt(number); ++i) {
            if (number % i == 0) {
                return false;
            }
        }
        return number > 1;
    }

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int n = scanner.nextInt();
        int a[] = new int[n];
        int count = 0;
        for (int i = 0; i < n; ++i) {
            a[i] = scanner.nextInt();
            if (isPrime(a[i])) {
                ++count;
            }
        }
        System.out.println(count);

        scanner.close();
    }
}