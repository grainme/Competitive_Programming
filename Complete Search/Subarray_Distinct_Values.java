/**  /\_/\
*   (= ._.)
*   / > \>
*
* Salam Marouane :)
*/

import java.util.*;
import java.io.*;

public class Subarray_Distinct_Values {
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
        int n,k;
        n = in.nextInt(); k = in.nextInt();
        HashMap<Integer, Integer> mpp= new HashMap<>();
        long r = 0, distinct = ;
        for(l = 0; l < n; l++){
            while(r < n && ())
        }
    }
}