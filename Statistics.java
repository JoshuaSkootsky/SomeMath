
/**
 * This class does some basic Statistics for 11th Grade Math
 * http://www.ixl.com/math/algebra-2/variance-and-standard-deviation
 * 
 * This is in Java 8.whatever
 * 
 * @Joshua Skootsky
 * @Aug 13 2014
 */
public class Statistics
{
    /**
     * Constructor for objects of class Statistics
     */
    public Statistics()
    {
        // nothing to initialize
    }
    /**
     * Calculate the arithmatic mean, given an array of values
     * 
     * @param  y   an integer array
     * @return     mean of y, in double form
     */
    public double mean(double[] xs)
    {
        int len = xs.length;
        double sum = 0;
        for (int i=0; i< len; i++) {
            sum += xs[i];
        }
        return sum/len;
    }
    /**
     * Calculate variance using the mean
     * @param xs int array
     * @return variance a double
     */
    public double variance(double[] xs)
    {
        double mean = mean(xs);
        int len = xs.length;
        double sum = 0;
        for (int i=0; i < len; i++) {
            sum += (xs[i] - mean) * (xs[i] - mean);
        }
        return sum/len;
    }
    /**
     * Calculate standard deviation using the variance
     * @param xs int array
     * @return stddev a double
     */
    public double stddev(double[] xs)
    {
        double variance = variance(xs);
        return Math.sqrt(variance);
    }
}
