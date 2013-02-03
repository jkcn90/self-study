package chapter1;
/**
 * Disply the population for each of the next five years given that: <br>
 * The current population is 312,032,486. <br>
 * One year has 365 days. <br>
 * There is: <br>
 * One birth every 7 seconds <br>
 * One death every 13 seconds <br>
 * One new immigrant every 45 seconds.
 */
public class Exercise11
{
  public static void main(String[] args)
  {
    double yearOnePopulation = 312032486.0;
    double secondsPerYear = 60.0 * 60.0 * 24.0 * 365.0;
    double yearChange = (1 * secondsPerYear / 7.0) - (1 * secondsPerYear / 13.0) + (1 * secondsPerYear / 45.0);
    System.out.println("Year zero population: " + yearOnePopulation);
    System.out.println("Year one population: " + yearOnePopulation + yearChange);
    System.out.println("Year two population: " + yearOnePopulation + 2.0 * yearChange);
    System.out.println("Year three population: " + yearOnePopulation + 3.0 * yearChange);
    System.out.println("Year four population: " + yearOnePopulation + 4.0 * yearChange);
    System.out.println("Year five population: " + yearOnePopulation + 5.0 * yearChange);
  }
}
