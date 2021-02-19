import java.util.*;

public class Main{
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        String s = input.nextLine();
        if(s.charAt(s.length()-1)=='2'||s.charAt(s.length()-1)=='4'||s.charAt(s.length()-1)=='5'||s.charAt(s.length()-1)=='7'||s.charAt(s.length()-1)=='9'){
            System.out.println("hon");
        }
        else if(s.charAt(s.length()-1)=='0'||s.charAt(s.length()-1)=='1'||s.charAt(s.length()-1)=='6'||s.charAt(s.length()-1)=='8'){
            System.out.println("pon");
        }else{
            System.out.println("bon");
        }
    }
}
