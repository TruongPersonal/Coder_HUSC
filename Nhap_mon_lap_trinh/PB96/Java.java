import java.util.Arrays;
import java.util.Scanner;

public class Java {
    static int C[] = new int[100001];

    static class Pair {
        int first, second;

        Pair(int first, int second) {
            this.first = first;
            this.second = second;
        }
    }

    static void compressed(int[] a, int[] b, int n) {
        Pair[] P = new Pair[n];
        for (int i = 0; i < n; ++i) {
            P[i] = new Pair(a[i], i);
        }
        Arrays.sort(P, (p1, p2) -> Integer.compare(p1.first, p2.first));

        int count = 0;
        b[P[0].second] = count;

        for (int i = 1; i < n; ++i) {
            if (P[i].first != P[i - 1].first) {
                ++count;
            }
            b[P[i].second] = count;
        }
    }

    static void solve(int a[], int b[], int n) {
        Arrays.fill(C, 0);

        for (int i = 0; i < n; ++i) {
            ++C[b[i]];
        }

        int max_count = 0;
        for (int i = 0; i <= 100000; ++i) {
            max_count = Math.max(max_count, C[i]);
        }

        for (int i = 0; i < n; ++i) {
            if (C[b[i]] == max_count) {
                System.out.println(a[i]);
                break;
            }
        }
    }

    static void input(Scanner scanner, int[] a, int n) {
        for (int i = 0; i < n; ++i) {
            a[i] = scanner.nextInt();
        }
    }

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int n = scanner.nextInt();

        int a[] = new int[n];

        input(scanner, a, n);

        int b[] = new int[n];
        compressed(a, b, n);

        solve(a, b, n);
        scanner.close();
    }
}