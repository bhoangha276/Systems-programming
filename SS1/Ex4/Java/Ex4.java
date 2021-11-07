
import java.awt.*;
import java.io.*;


public class Ex4{

    public static void inputChar() throws IOException{
        System.out.println("Nhap ky tu:");
        while(true){
            char a;
            a =(char)System.in.read();
            if((int)a == 49)
            
                break;
         
            // else 
            // {
            //     System.out.print((int)a);
            // }
        }
    }

    public static void main(String[] args) throws IOException {
        inputChar();

    }
    
}
