import java.util.*;

public class Ex8{
  public static void main(String args[]) {
    int num;
    Scanner sc = new Scanner(System.in);

    System.out.print("Enter any integer number: ");
    num = sc.nextInt();

    String hexVal = "";
    hexVal = Integer.toHexString(num);
    System.out.println("Hexadecimal Number is: " + hexVal);
  }
}