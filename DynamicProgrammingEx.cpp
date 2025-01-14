// GP Dynamic Programming Example for Presentation at GAU in "C++ and Algorithms (Advanced Course)"


#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int fibonacci(int n) {
    if (n <= 1) return n; // Base case: F(0) = 0, F(1) = 1
    
    // Create an array to store Fibonacci numbers up to n
    vector<int> dp(n + 1, 0); // dp[i] will store F(i)
    dp[1] = 1; // Initialize F(1)

    // Using dynamic programming (bottom-up approach)
    for (int i = 2; i <= n; i++) {
        dp[i] = dp[i - 1] + dp[i - 2]; // F(i) = F(i-1) + F(i-2)
    }

    return dp[n]; // Return the nth Fibonacci number
}

int knapsack(int W, vector<int>& weights, vector<int>& values, int n) {
    // Create a 2D DP table, where dp[i][w] is the max value for the first i items and weight w
    vector<vector<int>> dp(n + 1, vector<int>(W + 1, 0)); 

    // Build the DP table using the 0/1 Knapsack approach
    for (int i = 1; i <= n; i++) {
        for (int w = 1; w <= W; w++) {
            if (weights[i - 1] <= w) {
                // If we can include the item, we take the max of including or excluding the item
                dp[i][w] = max(dp[i - 1][w], dp[i - 1][w - weights[i - 1]] + values[i - 1]);
            } else {
                // If we can't include the item, we just exclude it
                dp[i][w] = dp[i - 1][w];
            }
        }
    }

    return dp[n][W]; // Return the maximum value achievable within weight W
}

int lcs(string s1, string s2) {
    int m = s1.length();
    int n = s2.length();
    
    // Create a 2D DP table to store the lengths of common subsequences
    vector<vector<int>> dp(m + 1, vector<int>(n + 1, 0)); 

    // Build the DP table using the LCS approach
    for (int i = 1; i <= m; i++) {
        for (int j = 1; j <= n; j++) {
            if (s1[i - 1] == s2[j - 1]) {
                // If characters match, increase the length of LCS by 1
                dp[i][j] = dp[i - 1][j - 1] + 1;
            } else {
                // Otherwise, take the maximum value from the previous row or column
                dp[i][j] = max(dp[i - 1][j], dp[i][j - 1]);
            }
        }
    }

    return dp[m][n]; // Return the length of the longest common subsequence
}

int main() {
    int n;
    cout << "Enter n for Fibonacci Sequence: ";
    cin >> n;
    cout << "Fibonacci(" << n << ") = " << fibonacci(n) << endl;

    int W, nKnapsack;
    cout << "Enter the number of items: ";
    cin >> nKnapsack;
    cout << "Enter the maximum weight of the knapsack: ";
    cin >> W;
    
    vector<int> weights(nKnapsack), values(nKnapsack);
    cout << "Enter the weights of the items: ";
    for (int i = 0; i < nKnapsack; i++) {
        cin >> weights[i];
    }
    
    cout << "Enter the values of the items: ";
    for (int i = 0; i < nKnapsack; i++) {
        cin >> values[i];
    }
    
    cout << "Maximum value in Knapsack: " << knapsack(W, weights, values, nKnapsack) << endl;

    string s1, s2;
    cout << "Enter the first string for LCS: ";
    cin >> s1;
    cout << "Enter the second string for LCS: ";
    cin >> s2;
    
    cout << "Length of Longest Common Subsequence: " << lcs(s1, s2) << endl;

    return 0;
}
