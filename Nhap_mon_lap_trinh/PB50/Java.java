import java.util.Scanner;

public class Java {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        double x = scanner.nextDouble();
        double S = 1;
        double term = 1;
        int i = 1;

        while (true)
        {
            term *= x / i;
            if (term < 1e-9)
            {
                break;
            }
            S += term;
            ++i;
        }
        System.out.printf("%.4f", S);
        scanner.close();
    }
}
