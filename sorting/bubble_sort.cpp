class Solution 
{
public:
    vector<int> bubbleSort(vector<int>& nums) 
    {
        for(int i=nums.size()-1;i>=0;i--)// 4
        {
            for(int j=0;j<i;j++)//j=1
            {
                if(nums[j]>nums[j+1])//
                {
                    int temp= nums[j];
                    nums[j]= nums[j+1];
                    nums[j+1]= temp;
                }
            }
        }

        return nums;
    }
};
