import java.io.IOException;
import java.io.PrintWriter;
import java.nio.charset.StandardCharsets;
import java.util.Arrays;

/**
 * 调用count()即可
 * 查看程序耗时，存储在runTime中
 */
public class magicSquare {
    static int count = 0;
    final int[] right_arr = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16};
    long start;
    long end;
    long runTime;
    void bubble(int[] arr){
        int moment;
        for(int i = arr.length-1;i>0;i--)
            for(int j=0;j<i;j++){
                if (arr[i]<arr[j]) {
                    moment = arr[i];
                    arr[i] = arr[j];
                    arr[j] = moment;
                }
            }
    }

    boolean fill(int a,int b,int c, int d, int e,int f,int g){
        int[] arr = {
                a,b,c,34-a-b-c,
                d,e,f,34-d-e-f,
                34-2*a-b-c-d+f+g,g,34-e-f-g, -34+2*a+b+c+d+e-g,
                a+b+c-f-g,34-b-e-g,-c+e+g,-a+f+g
        };
        bubble(arr);
        return Arrays.equals(arr, right_arr);
    }

    void printer(int a,int b,int c, int d, int e,int f,int g,PrintWriter toFile) throws IOException {
        int[] arr = {
                a,b,c,34-a-b-c,
                d,e,f,34-d-e-f,
                34-2*a-b-c-d+f+g,g,34-e-f-g, -34+2*a+b+c+d+e-g,
                a+b+c-f-g,34-b-e-g,-c+e+g,-a+f+g
        };
        toFile.println("第"+count+"种");
        for(int i=0;i<=3;i++) {
            for (int j=0;j<=3;j++)
                toFile.print(arr[i*4+j] + " ");
            toFile.println();
        }
        toFile.println();
        toFile.println();
        toFile.println();
    }

    void count() throws IOException {
        start = System.currentTimeMillis();
        PrintWriter toFile;
        toFile = new PrintWriter("magicsquare.txt");
        for (int i1=1;i1<= right_arr.length;i1++){
            for (int i2=1;i2<= right_arr.length;i2++){
                if(i1!=i2)
                    for (int i3=1;i3<= right_arr.length;i3++){
                        if(i2!=i3)
                            for (int i4=1;i4<= right_arr.length;i4++){
                                if(i3!=i4)
                                    for (int i5=1;i5<= right_arr.length;i5++){
                                        if(i4!=i5)
                                            for (int i6=1;i6<= right_arr.length;i6++){
                                                if(i5!=i6)
                                                    for (int i7=1;i7<= right_arr.length;i7++){
                                                        if(i6!=i7)
                                                            if(fill(i1,i2,i3,i4,i5,i6,i7)) {
                                                                count++;
                                                                printer(i1,i2,i3,i4,i5,i6,i7,toFile);
                                                            }
                                                    }
                                            }
                                    }
                            }
                    }
            }
        }
        toFile.close();
        end = System.currentTimeMillis();
        runTime = (end-start)/1000;
    }
}
