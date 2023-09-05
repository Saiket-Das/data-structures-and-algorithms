/*
  Knapsack Problem
  Problem Link: https://practice.geeksforgeeks.org/problems/0-1-knapsack-problem0945/1?utm_source=gfg&utm_medium=article&utm_campaign=bottom_sticky_on_article
*/

// Using Recursion
class Solution
{
    public:
    
    int dp[1005][1005];
    
    //Function to return max value that can be put in knapsack of capacity W.
    int recursion (int s, int weight[], int value[], int n) {
        if (n == 0 || s == 0) return 0;
        
        if (dp[n][s] != -1) return dp[n][s];
        
        if (weight[n-1] <= s) {
            int option1 = value[n-1] + recursion(s-weight[n-1], weight, value, n-1);
            int option2 = recursion(s, weight, value, n-1);
            return dp[n][s]= max(option1, option2);
        }
        else {
            return dp[n][s] = recursion(s, weight, value, n-1);
        }
    }
    
    int knapSack(int w, int weight[], int value[], int n) 
    { 
        for (int i = 0; i <= n; i++) {
            for (int j = 0; j <= w; j++) {
                dp[i][j] = -1;
            }
        }
        
        return recursion(w, weight, value, n);
    }
};

// Using Iteration
class Solution
{
    public:
    
    //Function to return max value that can be put in knapsack of capacity W.
    int knapSack(int w, int weight[], int value[], int n) 
    { 
        int dp[n+1][w+1];
        
        for (int i = 0; i <= n; i++) {
            for (int j = 0; j <= w; j++) {
                if (i == 0 || j == 0 ) {
                    dp[i][j] = 0;
                }
            }
        }
        
        for (int i = 1; i <= n; i++) {
            for (int j = 1; j <= w; j++) {
                if (weight[i - 1] <= j) {
                    int option1 = value[i-1] + dp[i-1][j-weight[i-1]];
                    int option2 = dp[i-1][j];
                    dp[i][j]= max(option1, option2);
                }
                else {
                    dp[i][j] = dp[i-1][j];
                }
            }
        }
        
        return dp[n][w];
    }
};