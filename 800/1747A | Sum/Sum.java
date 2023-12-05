import java.util.*;

public class Sum{
    public static void main(String[] args) {

        Scanner scan = new Scanner(System.in);

        int n = scan.nextInt();

        for (int i = 0; i < n; i++) {

            ArrayList<Integer>  arr = new ArrayList<Integer>();
            for (int j = 0; j < 3; j++) {
                arr.add(scan.nextInt());
            }
            if( arr.stream().mapToInt(x -> x).sum() == Collections.max(arr)*2) {
                System.out.println("YES");
            } else {
                System.out.println("NO");
            }
        }

        scan.close();
    }  
}