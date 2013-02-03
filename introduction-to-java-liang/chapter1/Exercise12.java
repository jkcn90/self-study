package chapter1;
/**
 * Assume that a runner runs 24 miles in 1 hour, 45 minutes, and 35 seconds. <br>
 * Display the average speed in kilomemters per hour. <br>
 * Assume that 1 mile = 1.6 km.
 */
public class Exercise12
{
  public static void main(String[] args)
  {
    double averageSpeed = (24.0 / 1.6) / (1 + (40 / 60) + (35 / 3600));
    System.out.println("A runner that runs 24 miles in 1 hour, 40 minutes, and 35 seconds is running at: " + averageSpeed + " km / hour.");
  }
}
