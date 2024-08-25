import java.util.Scanner;
public class hanoi {
    public static void main(String[] args){
        Scanner in = new Scanner(System.in);
        System.out.println("hanoi\n输入你想要的层数");
        hanoi(in.nextInt(),'A','B','C');
        in.close();
    }
    public static void hanoi(int n, char A, char B, char C){
        if(n==1)
            System.out.println(A+"->"+C);
        else {
            hanoi(n-1, A, C, B);
            System.out.println(A+"->"+C);
            hanoi(n-1,B,A,C);
        }
    }

}
