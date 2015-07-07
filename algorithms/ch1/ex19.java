public class ex19
{
    public static long Fibonacci1(int n)
    {
        if (n == 0)
            return 0;
        if (n == 1)
            return 1;
        return Fibonacci1(n - 1) + Fibonacci1(n - 2);
    }

    public static long Fibonacci2(int n)
    {
        if (n == 0)
            return 0;
        if (n == 1)
            return 1;

        int[] fibonacciArray = new int[n];
        fibonacciArray[0] = 0;
        fibonacciArray[1] = 1;

        for (int i = 2; i < n; i++)
            fibonacciArray[i] = fibonacciArray[i-1] + fibonacciArray[i-2];
        return fibonacciArray[n-1];
    }

    public static void main(String[] args)
    {
        for (int n = 0; n < 100; n++)
            System.out.println(n + " " + Fibonacci2(n));

        for (int n = 0; n < 100; n++)
            System.out.println(n + " " + Fibonacci1(n));
    }
}
