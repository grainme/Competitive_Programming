/**  /\_/\
*   (= ._.)
*   / > \>
*
* Salam Marouane :)
*/

import java.util.*;
import java.io.*;

public class A_Bear_and_Big_Brother {
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
        int a = in.nextInt(), b = in.nextInt(), y = 0;
        while(a<=b){
            a = a*3;
            b = b*2;
            y++;
        }
        System.out.println(y);
    }
}