public class ex2
{
    public static void main(String[] args)
    {
        Object ans;

        ans = (1 + 2.236) / 2;
        System.out.println("(1 + 2.236) / 2 = " + ans +
                           " and has type: " + ans.getClass());

        ans = 1 + 2 + 3 + 4.0;
        System.out.println("1 + 2 + 3+ 4.0 = " + ans +
                           " and has type: " + ans.getClass());

        ans = 4.1 >= 4;
        System.out.println("4.1 >= 4 = " + ans +
                           " and has type: " + ans.getClass());

        ans = 1 + 2 + "3";
        System.out.println("1 + 2 + \"3\" = " + ans +
                           " and has type: " + ans.getClass());
    }
}
