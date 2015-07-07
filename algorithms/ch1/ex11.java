public class ex11
{
    public static void printBooleanArray(boolean[][] booleanArray)
    {
        int numberOfColumns = 0;
        for (int i = 0; i < booleanArray.length; i++)
        {
            int length = booleanArray[i].length;
            if (length > numberOfColumns)
                numberOfColumns = length;
        }

        System.out.print("       ");
        for (int i = 0; i < numberOfColumns; i++)
            System.out.printf("%d", i + 1);
        System.out.println();

        for (int i = 0; i < booleanArray.length; i++)
        {
            System.out.printf("Row %d: ", i + 1);
            for (int j = 0; j < booleanArray[i].length; j++)
            {
                boolean booleanValue = booleanArray[i][j];
                if (booleanValue == true)
                    System.out.print('*');
                else
                    System.out.print(' ');
            }
            System.out.println();
        }
    }

    public static void main(String[] args)
    {
        boolean[][] booleanArray = {{true, false, true, true},
                                     {false, false ,false, false},
                                     {true}};
        printBooleanArray(booleanArray);
    }
}
