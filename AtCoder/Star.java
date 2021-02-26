import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.StringTokenizer;
import java.util.*;

public class Main {
    public static void main(String[] args) {
        FastScanner input = new FastScanner();
        long c = input.nextLong();
        if(c%100==0){
            System.out.println(100);
        }else{
            int i = 100;
            while(i<c){
                i+=100;
            }
            System.out.println(i-c);
        }
    }

    public static class FastScanner {
        BufferedReader br=new BufferedReader(new InputStreamReader(System.in));
        StringTokenizer st=new StringTokenizer("");
        public String next() {
            while (!st.hasMoreElements())
                try {
                    st=new StringTokenizer(br.readLine());
                } catch (IOException e) {
                    e.printStackTrace();
                }
            return st.nextToken();
        }

        int nextInt () {
            return Integer.parseInt(next());
        }
        long nextLong () {
            return Long.parseLong(next());
        }
    }
}
