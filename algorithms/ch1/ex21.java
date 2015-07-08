import java.util.Scanner;

public class ex21
{
    public static void main(String[] args)
    {
        Scanner scanner = new Scanner(System.in);

        int maxNumberOfInputs = 30;
        int count = 0;
        String[] nameArray = new String[maxNumberOfInputs];
        int[] firstIntArray = new int[maxNumberOfInputs];
        int[] secondIntArray = new int[maxNumberOfInputs];

        while(true)
        {
            System.out.print("Enter a name followed by two integers: ");

            if (scanner.hasNext())
                nameArray[count] = scanner.next();
            else
                break;

            if (scanner.hasNextInt())
                firstIntArray[count] = scanner.nextInt();
            else
                break;

            if (scanner.hasNextInt())
                secondIntArray[count] = scanner.nextInt();
            else
                break;

            count += 1;
            if (count > maxNumberOfInputs)
            {
                String msg = "Read in %d inputs. This is the maximum allowed\n";
                System.out.printf(msg, maxNumberOfInputs);
                break;
            }
        }

        System.out.println();
        for (int i = 0; i < count; i++)
        {
            System.out.printf("%10s | %10d | %10d | %10.3f", nameArray[i], 
                firstIntArray[i], secondIntArray[i],
                firstIntArray[i] / (double) secondIntArray[i]);
            System.out.println();
        }
    }
}
