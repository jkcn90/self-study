import java.util.Scanner;

public class ex24
{
    public static int gcd(int p, int q)
    {
        System.out.printf("p = %d | q = %d\n", p, q);
        if (q == 0)
            return p;
        int r = p % q;
        return gcd(q, r);
    }

    public static void main(String[] args)
    {
        Scanner scanner = new Scanner(System.in);

        int numberOfIntegers = 0;

        System.out.print("Enter two integers: ");
        int firstInteger = scanner.nextInt();
        int secondInteger = scanner.nextInt();

        int gcd_value = gcd(firstInteger, secondInteger);

        String msg = "The gcd of %d and %d is: %d\n";
        System.out.printf(msg, firstInteger, secondInteger, gcd_value);
    }
}
