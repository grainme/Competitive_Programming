/**  /\_/\
*   (= ._.)
*   / > \>
*
* Salam Marouane :)
*/

import java.util.*;
import java.io.*;

public class A_Alternately {
    static class FastReader {
        BufferedReader br;
        StringTokenizer st;

        public FastReader() {
            br = new BufferedReader(new InputStreamReader(System.in));
        }

        String next() {
            while (st == null || !st.hasMoreElements()) {
                try {
                    st = new StringTokenizer(br.readLine());
                } catch (IOException e) {
                    e.printStackTrace();
                }
            }
            return st.nextToken();
        }

        int nextInt() {
            return Integer.parseInt(next());
        }

        long nextLong() {
            return Long.parseLong(next());
        }

        double nextDouble() {
            return Double.parseDouble(next());
        }

        String nextLine() {
            String str = "";
            try {
                str = br.readLine();
            } catch (IOException e) {
                e.printStackTrace();
            }
            return str;
        }
    }

    public static void main(String[] args) {
        FastReader in = new FastReader();
        int t = 1;
        // t = in.nextInt();
        while (t-- > 0) {
            int n = in.nextInt();
            String s = in.next();
            for(int i = 0; i < n-1; i++){
                if(s.charAt(i)==s.charAt(i+1)){
                    System.out.println("No");
                    return;
                }
            }
            System.out.println("Yes");
        }
    }
}