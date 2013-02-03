package chapter1;
/**
 * Approximate PI by displaying the result of: <br>
 * 4 x (1 - 1/3 + 1/5 - 1/7 + 1/9 - 1/11) and <br>
 * 4 x (1 - 1/3 + 1/5 - 1/7 + 1/9 - 1/11 + 1/13)
 */
public class Exercise7
{
  public static void main(String[] args)
  {
    System.out.println(4 * (1.0 - 1.0/3 + 1.0/5 - 1.0/7 + 1.0/9 - 1.0/11));
    System.out.println(4 * (1.0 - 1.0/3 + 1.0/5 - 1.0/7 + 1.0/9 - 1.0/11 + 1.0/13));
  }
}
