import java.util.*;
public class DislikeOfThrees {

    public static void main(String[] args){
      Scanner scan = new Scanner(System.in);
      int input = scan.nextInt();
      while(input>0){
        int num = 1;
        int count = 0;
        int k = scan.nextInt();
        while(count<=k){
          if(num%3!=0 && num%10!=3){
            count ++;
          }
          if(count == k){
            System.out.println(num);
            break;
          }
        
          num++;
          }
          
      
        input--;
      }
      scan.close();

    }
}