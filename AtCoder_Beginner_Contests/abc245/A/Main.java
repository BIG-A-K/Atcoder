import java.util.Scanner;
public class Main{
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
        int A = sc.nextInt();
        int B = sc.nextInt();
        int C = sc.nextInt();
        int D = sc.nextInt();
        if(A*60+B>C*60+D){
            System.out.println("Aoki");
        }
        else{
            System.out.println("Takahashi");
        }
    }
}