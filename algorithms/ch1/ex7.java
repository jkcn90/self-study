public class ex7
{
    public static void main(String[] args)
    {
        System.out.print("a: ");
        double t = 9.0;
        while (Math.abs(t - 9.0/t) > .001)
            t = (9.0/t + t) / 2.0;
        System.out.printf("%.5f\n", t);

        System.out.print("b: ");
        int sum = 0;
        for (int i = 1; i < 1000; i++)
            for (int j = 0; j < i; j++)
                sum++;
        System.out.println(sum);

        System.out.print("c: ");
        int N = 5;
        sum = 0;
        for (int i = 1; i < 1000; i *= 2)
            for (int j = 0; j < N; j++)
                sum++;
        System.out.println(sum);
    }
}
