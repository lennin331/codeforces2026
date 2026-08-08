import java.util.*;
public class square {
    public static void main(String[] args){
        Scanner s = new Scanner(System.in); int t = s.nextInt();
        while(t>0){
            int dim = s.nextInt();
            int dim2 = s.nextInt();
            int dim3 = s.nextInt();
            int dim4 = s.nextInt();
            if(dim == dim2 && dim3 == dim4 && dim == dim3) System.out.println("YES");
            else System.out.println("NO");
            
            t--;
        }


        s.close();

    }
    
}
