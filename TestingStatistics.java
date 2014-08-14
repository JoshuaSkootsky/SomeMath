

import static org.junit.Assert.*;
import org.junit.After;
import org.junit.Before;
import org.junit.Test;

/**
 * The test class TestingStatistics.
 * More tests could be written
 * @Joshua Skootsky
 * @August 13, 2014
 */
public class TestingStatistics
{
    /**
     * Default constructor for test class TestingStatistics
     */
    public TestingStatistics()
    {
    }

    /**
     * Sets up the test fixture.
     *
     * Called before every test case method.
     */
    @Before
    public void setUp()
    {
    }

    /**
     * Tears down the test fixture.
     *
     * Called after every test case method.
     */
    @After
    public void tearDown()
    {
    }

    @Test
    public void standardDevCalculationInts()
    {
        Statistics statisti1 = new Statistics();
        double[] a = {51,66,93,90,84};
        assertEquals(15.9, statisti1.stddev(a), 0.1);
    }
}

