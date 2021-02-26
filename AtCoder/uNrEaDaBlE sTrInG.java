import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.StringTokenizer;
import java.util.*;
import java.lang.*;

public class Main {
    public static void main(String[] args) {
        FastScanner input = new FastScanner();
        String s = input.next();
        boolean flag = true;
        for(int i = 0; i < s.length(); i++){
            if(i==0||i%2==0){
                char a = s.charAt(i);
                if(a>='a'&&a<='z'){
                    flag = true;
                }else{
                    flag = false;
                }
            }else{
                char a = s.charAt(i);
                if(a>='A'&&a<='Z'){
                    flag = true;
                }else{
                    flag = false;
                }
            }
            if(!flag)break;
        }
        if(flag)System.out.println("Yes");
        else System.out.println("No");
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
