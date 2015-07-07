public class ex16
{
    public static String exR1(int n)
    {
        if (n <= 0)
            return "";
        return exR1(n-3) + n + exR1(n - 2) + n;
    }
    
    public static void main(String[] args)
    {
        int[] inputs = {0, 1, 2, 3 , 4, 5, 6, 7, 8, 9, 10};

        for (int i = 0; i < inputs.length; i++)
        {
            int n = inputs[i];
            System.out.printf("N = %d, Result = %s\n", n, exR1(n));
        }
    }
}
