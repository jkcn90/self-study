import java.lang.Math;

public class ex20
{
    public static double ln(int n, double tolerance)
    {
        if (n == 1)
            return 0;

        double e = 2.718;
        double low = 0;
        double high = n;
        double error;
        double guess;
        double inverse_ln_value;

        do {
            guess = (low + high) / 2.0;

            inverse_ln_value = Math.pow(e, guess);

            if (inverse_ln_value >= n)
            {
                error = inverse_ln_value - n;
                high = guess;
            } else
            {
                error = n - inverse_ln_value;
                low = guess;
            }
        } while(error > tolerance);
        return guess;
    }

    public static double ln(int n)
    {
        return ln(n, 0.00001);
    }

    public static double lnFactorial(int n)
    {
        if (n == 1)
            return 0;
        return lnFactorial(n - 1) + ln(n);
    }

    public static void main(String[] args)
    {
        for (int n = 1; n < 100; n++)
            System.out.println(n + " " + lnFactorial(n));
    }
}
