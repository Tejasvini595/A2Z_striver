class Solution {
public:
    int maxProfit(vector<int>& prices) {
       int n= prices.size();
       int mn=0,mx=0, diff= prices[mx]-prices[mn];//0
       for(int i=0;i<n;i++)
       {
        if(prices[i]<prices[mn])//
        {
            diff= max(diff, prices[mx]-prices[mn]);//0
            mn=i;//1

        }
        if(mn>mx)
        {
            mx=i;//1
        }
        if(prices[i]>prices[mx])
        {
            
            mx=i;
            diff= max(diff, prices[mx]-prices[mn]);
        }
       }

       return diff;
    }
};
