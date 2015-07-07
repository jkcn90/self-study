public class ex5
{
    public static void checkXYBetween01(double x, double y)
    {
        if ((x <= 0) || (x >= 1))
        {
            System.out.println(false);
            return;
        }
        if ((y <= 0) || (y >= 1))
        {
            System.out.println(false);
            return;
        }
        System.out.println(true);
    }
    public static void main(String[] args)
    {
        double x, y;
        String msg = "%f and %f are both between 0 and 1 = ";

        x = 0.5;
        y = 0.5;
        System.out.printf(msg, x, y);
        checkXYBetween01(x, y);

        x = 1;
        y = 0.1;
        System.out.printf(msg, x, y);
        checkXYBetween01(x, y);

        x = 0;
        y = 0.2;
        System.out.printf(msg, x, y);
        checkXYBetween01(x, y);

        x = -1;
        y = 0.3;
        System.out.printf(msg, x, y);
        checkXYBetween01(x, y);

        x = 20;
        y = 0.1231231;
        System.out.printf(msg, x, y);
        checkXYBetween01(x, y);
    }
}
