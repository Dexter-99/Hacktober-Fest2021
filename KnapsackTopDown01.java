public class KnapsackTopDown01
{
    //now we dont need recursion in top down approach
    public static void main(String[] args)
    {
        int n = 4 , W = 7;
        int[] val = {1,4,5,7};
        int[] wt = {1,3,4,5};

        System.out.println(knapsack(wt , val , W , n));
    }

    private static int knapsack(int[] wt, int[] val, int W, int n) {
        int[][] t = new int[n+1][W+1];

        //fill -1
        for(int i = 0; i< n+1 ; i++ )
        {
            for(int j = 0 ; j< W+1 ; j++)
            {
                t[i][j] = -1 ;
            }
        }

        //just to check did it fill or not
        for(int[]  i: t)
        {
            for(int j : i)
            {
                System.out.print(j+ " ");
            }
            System.out.println();
        }



        for(int i = 0 ; i < n+1 ; i++)
        {
            for(int j = 0 ;  j < W+1 ; j++)
            {
                //base case
                if(i==0 || j==0)
                {
                    t[i][j]=0;
                }
                //current weight can be fit in bag
                else if(wt[i-1]<=j)
                {
                    int valueOne = val[i-1] + t[i-1][j-wt[i-1]];  //take current wt
                    int valueTwo = t[i-1][j]; //skip current wt
                    t[i][j] = Math.max(valueOne  , valueTwo);
                }
                //cannot be fit in bag
                else if(wt[i-1]>j)
                {
                    t[i][j] = t[i-1][j];
                }
            }
        }

        for(int[]  i: t)
        {
            for(int j : i)
            {
                System.out.print(j+ " ");
            }
            System.out.println();
        }

        return t[n][W];
    }
}
