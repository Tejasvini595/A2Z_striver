class Solution 
{
public:
    bool check(vector<int>& nums) 
    {
        int i=0, n= nums.size();
        while(i+1<nums.size() && nums[i]<=nums[i+1])
        {
            i++;
        }

        if(i==nums.size()-1)
        return true;
        else
        {
            int fl=0;
            int k=i+1;
            for(int i=0;i<k-1;i++)
            {
                if(nums[i]>nums[i+1])
                {
                    return false;
                }
            }

            for(int i=k;i<n-1;i++)
            {
                if(nums[i]>nums[i+1])
                return false;
            }

            if(nums[n-1]>nums[0])
            return false;

            return true;
        }
    }
};