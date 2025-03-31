import java.util.Scanner;

public class Java {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        int n = input.nextInt();
        if ((!(n % 2 == 0) && (n < 0 && n % 3 == 0)) || ((n % 2 == 0) && !(n < 0 && n % 3 == 0))) {
            System.out.println("Yes");
        }
        else {
            System.out.println("No");
        }
        input.close();
        
    }
}
