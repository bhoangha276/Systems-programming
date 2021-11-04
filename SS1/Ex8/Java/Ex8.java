// import java.util.*;
import java.util.Scanner;

public class Ex8{
  public static void main(String args[]) {
    int num;
    Scanner sc = new Scanner(System.in);

    System.out.print("Nhap mot so nguyen: ");
    num = sc.nextInt();

    String hexVal = "";
    hexVal = Integer.toHexString(num);
    System.out.println("Chuyen sang ma Hex: " + hexVal);
  }
}