public class ex3
{
    public static void checkAllEqual(int x, int y, int z)
    {
        if (x == y && y == z)
            System.out.println("equal");
        else
            System.out.println("not equal");
    }
    public static void main(String[] args)
    {
        int x, y, z;
        String msg = "%d, %d, and %d are ";

        x = 1;
        y = 2;
        z = 2;
        System.out.printf(msg, x, y, z);
        checkAllEqual(x, y, z);

        x = 2;
        y = 2;
        z = 2;
        System.out.printf(msg, x, y, z);
        checkAllEqual(x, y, z);

        x = 1;
        y = 2;
        z = 1;
        System.out.printf(msg, x, y, z);
        checkAllEqual(x, y, z);
    }
}
