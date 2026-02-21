class Solution 
{
public:
    int majorityElement(vector<int>& nums) 
    {
        int len= nums.size();

        int mj=0, c=0;
        for(int i=0;i<len;i++)
        {
            if(c==0)
            mj= nums[i];
            if(nums[i]==mj)
            c++;
            if(nums[i]!=mj)
            {
                c-=1;
            }
        }

        return mj;
    }
};