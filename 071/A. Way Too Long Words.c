import java.util.*;

public class Temp {
    public static void main (String[] args){
        Scanner scanner = new Scanner(System.in);
        int n = scanner.nextInt();
        String[] string = new String[n+1];
        for(int i=0;i<n;i++) {
            string[i] = scanner.next();
        }
        for(int i=0;i<n;i++) {
            if (string[i].length()>10) {
                System.out.printf("%c%d%c\n",string[i].charAt(0),string[i].length()-2,string[i].charAt(string[i].length()-1));
            }else {
                System.out.printf("%s\n",string[i]);
            }
        }
        scanner.close();
    }
}
