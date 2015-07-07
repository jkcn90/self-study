public class ex13
{

    public static void transposeTwoDimensionalArray(double[][] array)
    {
        int M = array.length;

        int N = array[0].length;
        for (int i = 1; i < M ; i++)
        {
            if (N < array[i].length)
                N = array[i].length;
        }

        double[][] transposedArray = new double[N][M];

        for (int i = 0; i < array.length; i++)
            for (int j = 0; j < array[i].length; j++)
                transposedArray[j][i] = array[i][j];

        for (int i = 0; i < N; i++)
        {
            for (int j = 0; j < M; j++)
                System.out.printf("%f ", transposedArray[i][j]);
            System.out.println();
        }
            
    }
    public static void main(String[] args)
    {
        double[][] array = {{0, 1, 2, 3, 4, 5, 6, 7, 8, 9},
                            {10, 11, 12, 13, 14, 15, 16, 17, 18, 19},
                            {20, 21, 22, 23, 24, 25, 26, 27, 28, 29},
                            {30, 31, 32, 33, 34, 35, 36, 37, 38, 39},
                            {40, 41, 42, 43, 44, 45, 46, 47, 48, 49}};
        transposeTwoDimensionalArray(array);
    }
}
