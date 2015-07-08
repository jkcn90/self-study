import java.util.Arrays;

public class ex23
{
    public static int rank(int key, int[] array)
    {
        return rank(key, array, 0, array.length - 1);
    }

    public static int rank(int key, int[] array, int low, int high)
    {
        if (low > high)
        {
            return -1;
        }

        int mid = low + (high - low) / 2;
        if (key < array[mid])
            return rank(key, array, low, mid - 1);
        else if (key > array[mid])
            return rank(key, array, mid +1, high);
        else
            return mid;
    }

    public static void main(String[] args) {
        String includeExclude = "+";
        if ((args.length > 1) && (args[1].equals("-")))
            includeExclude = "-";

        In in = new In(args[0]);
        int[] whitelist = in.readAllInts();

        Arrays.sort(whitelist);

        while (!StdIn.isEmpty()) {
            int key = StdIn.readInt();
            if (includeExclude.equals("+"))
            {
                if (rank(key, whitelist) == -1)
                    StdOut.println(key);
            } else
            {
                if (rank(key, whitelist) != -1)
                    StdOut.println(key);
            }
        }
    }
}
