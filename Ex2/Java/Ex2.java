import java.util.Random;
public class Ex2 {
    public static void main(String[] args)
    {
        for(int i=0; i<10; i++){
            Random rd = new Random();
            float a = rd.nextFloat();
            System.out.println(a);
        }
    }
}
