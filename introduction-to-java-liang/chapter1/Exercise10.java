package chapter1;
/**
 * A runner runs 14 km in 45 minutes and 30 seconds. <br>
 * Display the average speed in mph. <br>
 * Assume 1 mile = 1.6 km.
 */
public class Exercise10
{
  public static void main(String[] args)
  {
    double result = (14.0 / 1.6) / ((45.0 / 60.0) + (30.0 / 3600.0));
    System.out.println("A runner that runs 14 km in 45 minutes and 30 seconds runs at an average speed of: " + result + " mph.");
  }
}
