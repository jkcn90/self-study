public class ex27
{
    public static double binomial(int N, int k, double p)
    {
        System.out.println("N = " + N + " k = " + k);
        if ((N == 0) || (k < 0))
            return 1.0;
        return (1.0 - p)*binomial(N-1, k, p) + p*binomial(N-1, k-1, p);
    }

    public static void main(String[] args)
    {
        double result = binomial(100, 50, 0.5);
        System.out.println(result);
    }
}
