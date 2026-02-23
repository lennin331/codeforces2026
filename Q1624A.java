import java.util.Arrays;
import java.util.Scanner;
public class Q1624A {
    public static void main(String[] args){
        Scanner s = new Scanner(System.in);
        int t = s.nextInt();
        while(t>0){
            int len = s.nextInt();
            int[] arr = new int[len];
            for(int i = 0; i<len; i++){
                arr[i]= s.nextInt();
            }
            Arrays.sort(arr);
            int op = arr[len-1]-arr[0];
            System.out.print(op+"\n");

            t--;
        }

        

        s.close();
    }
}
