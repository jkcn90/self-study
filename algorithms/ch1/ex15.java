public class ex15
{
    public static int[] histogram(int[] inputArray, int m)
    {
        int[] outputArray = new int[m];

        for (int i = 0; i < inputArray.length; i++)
        {
            int value = inputArray[i];
            if (value < m)
                outputArray[value] += 1;
        }

        return outputArray;
    }

    public static void printArray(int[] array)
    {
        System.out.print('[');
        for (int i = 0; i < array.length; i++)
        {
            System.out.printf("%d", array[i]);
            if (i < array.length - 1)
                System.out.print(", ");
        }
        System.out.print(']');
    }

    public static void main(String args[])
    {
        String msg1 = "M = %d | Input Array:  ";
        String msg2 = "        Output Array: ";
        String msg3 = " (Sum = %d)";

        int m;
        int[] array;
        int[] outputArray;

        int[] arrayOfM = {1, 2, 3, 4, 5};
        int[][] arrayOfArrays = {{1, 2, 3, 4, 5, 6, 7},
                                 {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
                                 {0, 5, 5, 0, 0, 5, 0, 0, 3, 2, 2, 0, 2},
                                 {0, 5, 5, 0, 0, 5, 0, 0, 3, 2, 2, 0, 2},
                                 {1, 2, 3, 4, 5, 6, 7, 1, 2, 3, 4}};
        
        for (int i = 0; i < arrayOfArrays.length; i++)
        {
            m = arrayOfM[i];
            array = arrayOfArrays[i];
            outputArray = histogram(array, m);

            System.out.printf(msg1, m);
            printArray(array);
            System.out.println();

            System.out.print(msg2);
            printArray(outputArray);

            int outputArraySum = 0;
            for (int j = 0; j < outputArray.length; j++)
                outputArraySum += 1;

            System.out.printf(msg3, outputArraySum);
            System.out.println("\n");
        }
    }
}
