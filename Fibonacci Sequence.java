public class Fibonacci {
    public static void main(String[] args) {
        int n = 10; // Number of terms in the Fibonacci sequence
        System.out.println("Fibonacci Sequence up to " + n + " terms:");
        for (int i = 0; i < n; i++) {
            System.out.print(fibonacci(i) + " ");
        }
    }

    public static int fibonacci(int n) {
        if (n <= 1) {
            return n;
        } else {
            return fibonacci(n - 1) + fibonacci(n - 2);
        }
    }
}
