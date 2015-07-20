public class ex26
{
    public static void main(String[] args)
    {
        int t;
        int a = 5;
        int b = 9;
        int c = -1;

        System.out.println(a + " " + b + " " + c);

        if (a > b)
        {
            t = a;
            a = b;
            b = t;
        }

        if (a > c)
        {
            t = a;
            a = c;
            c = t;
        }

        if (b > c)
        {
            t = b;
            b = c;
            c = t;
        }
        System.out.println(a + " " + b + " " + c);
    }
}
