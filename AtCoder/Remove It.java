import java.util.*;

public class Main{
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        int a = input.nextInt(), b = input.nextInt();
        int [] data = new int[a];
        for(int i = 0; i < a; i++){
            int c = input.nextInt();
            data[i] = c;
        }
        for(int x: data){
            if(x!=b){
                System.out.print(x + " ");
            }
        }
    }
}
