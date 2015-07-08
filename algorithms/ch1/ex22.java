public class ex22
{

    public static int rank(int key, int[] array)
    {
        return rank(key, array, 0, array.length - 1, 0);
    }

    public static int rank(int key, int[] array, int low, int high, int depth)
    {
        String indentation = "";
        if (depth > 0)
        {
            indentation = new String(new char[depth]).replace("\0", "\t");
            System.out.print(indentation);
        }
        System.out.printf("Low = %d | High = %d\n", low, high);

        if (low > high)
        {
            if (depth > 0)
                System.out.print(indentation + "\t");
            System.out.println("Key not found");
            return -1;
        }

        int mid = low + (high - low) / 2;
        if (key < array[mid])
            return rank(key, array, low, mid - 1, depth + 1);
        else if (key > array[mid])
            return rank(key, array, mid +1, high, depth + 1);
        else
        {
            if (depth > 0)
                System.out.print(indentation + "\t");
            System.out.printf("Key found at %d\n", mid);
            return mid;
        }
    }

    public static void main(String[] args)
    {
        int key = 5;
        int[] array1 = {1, 2, 2, 3, 4, 5, 6, 6, 8, 9, 9, 9, 100, 200, 900};
        int[] array2 = {1, 2, 2, 3, 4, 4, 6, 6, 8, 9, 9, 9, 100, 200, 900};

        System.out.printf("Looking for %d\n\n", key);
        rank(key, array1);

        System.out.printf("\nLooking for %d\n\n", key);
        rank(key, array2);
    }
}
