public class ex9
{
    public static String getNumberAsBinaryString(int N)
    {
        String s = "";
        for (int n = N; n > 0; n /= 2)
            s = (n % 2) + s;
        return s;
    }

    public static void main(String[] args)
    {
        int x;
        String msg = "The binary representation for %d is: %s\n";

        x = 12;
        System.out.printf(msg, x, getNumberAsBinaryString(x));

        x = -12;
        System.out.printf(msg, x, getNumberAsBinaryString(x));

        x = 1231231;
        System.out.printf(msg, x, getNumberAsBinaryString(x));
    }
}
