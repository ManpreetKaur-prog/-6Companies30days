class Solution {
  public:
    long long squaresInChessBoard(long long N) {
        // code here
        long long dp[N];
        dp[0]=1;
        if(N==1)
        return 1;
       for(int i=1;i<N;i++)
       {
           dp[i]=pow(i+1,2)+dp[i-1];
       }
        return(dp[N-1]);
    }
};
