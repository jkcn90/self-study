public class ex14
{
    public static int lg(int n)
    {
        int x = 0;
        for (int i = n; i >= 2; i /= 2)
            x += 1;
        return x;
    }

    public static void main(String args[])
    {
        int[] array = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

        String msg = "The largest number not larger than log2(%d) = %d\n";

        for (int i = 0; i < array.length; i++)
            System.out.printf(msg, array[i], lg(array[i]));
    }
}
