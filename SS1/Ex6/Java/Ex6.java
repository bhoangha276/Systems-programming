import java.awt.*;
import java.io.*;


public class Ex6{

    public static void hex() throws IOException{
        System.out.println("Chuyen 1 ki tu ma hex(ESC de thoat): ");
        while(true){
            char num = (char)System.in.read();
            if((int)num == 49)
            {
                break;
            }
            String hex = Integer.toHexString((int)num);
            System.out.print(hex);
        }
    }
    public static void main(String[] args) throws IOException {
        hex();
    }
    
}



// import java.util.Scanner;
// public class Ex6 
// {

//     public static void main(String[] args) 
//     {
//         Scanner s = new Scanner(System.in);
//         System.out.print("Nhap mot ki tu: ");
//         String n = s.nextLine();
//         System.out.println(n);
//     }
// }