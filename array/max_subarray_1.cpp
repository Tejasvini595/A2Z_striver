class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int mx= nums[0]; //5
        int n= nums.size();
        int cur=0;
        for(int i=0;i<n;i++) // i=0
        {
            cur+=nums[i]; // 8

            if(cur>=mx) //
            {
                mx= cur; //9
            }

            if(cur<0)
            cur=0;
        }

        return mx;
        
    }
};