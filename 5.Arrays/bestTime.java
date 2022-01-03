class Solution {
    public int maxProfit(int[] prices) {
        int len =  prices.length;
        int min=Integer.MAX_VALUE;
        int mDiff=0;
        for(int i=0;i<len;i++){
            int profit = prices[i]-min;
            mDiff = Math.max(mDiff,profit);
            min = Math.min(min,prices[i]);
        }
        return mDiff;
    }
}