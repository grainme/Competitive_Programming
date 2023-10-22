import java.util.*;

public class B_Fibonaccharsis {

    static class Pair {
        long first;
        long second;

        Pair(long first, long second) {
            this.first = first;
            this.second = second;
        }
    }

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int t = scanner.nextInt();

        Pair[] vpr = new Pair[901];
        Pair prevPrev = new Pair(1, 0);
        Pair prev = new Pair(0, 1);
        vpr[1] = prevPrev;
        vpr[2] = prev;

        for (int i = 3; i < 901; i++) {
            prevPrev = vpr[i - 2];
            prev = vpr[i - 1];
            Pair newOne = new Pair(prevPrev.first + prev.first, prevPrev.second + prev.second);
            vpr[i] = newOne;
            prevPrev = prev;
            prev = newOne;
        }

        while (t-- > 0) {
            int n = scanner.nextInt();
            int k = scanner.nextInt();

            if (k >= 901) {
                System.out.println(0);
                continue;
            }

            Pair val = vpr[k];
            int result = 0;

            for (int i = 0; i <= n; i++) {
                long temp = n - val.first * i;
                if (temp % val.second == 0 && temp / val.second >= i) {
                    result++;
                }
            }

            System.out.println(result);
        }
    }
}
