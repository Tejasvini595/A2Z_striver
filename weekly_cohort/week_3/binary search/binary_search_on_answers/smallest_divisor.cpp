class Solution 
{
public:
    int smallestDivisor(vector<int>& nums, int threshold) 
    {
        int n= nums.size();

        int mx= nums[0];
        for(int i=0;i<n;i++)
        {
            mx= max(nums[i], mx);
        }

        int l=1, r= mx;
        int ans;

        while(l<=r)
        {
            int mid= l+(r-l)/2;
            int sum=0;
            for(int i=0;i<n;i++)
            {
                sum+= ceil((nums[i]+mid-1)/mid);
            }

            if(sum<=threshold)
            {
                ans= mid;
                r=mid-1;
            }

            else
            l=mid+1;
        }

        return ans;
    }
};