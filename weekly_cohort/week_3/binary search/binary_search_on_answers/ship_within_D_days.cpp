class Solution 
{
public:
    int shipWithinDays(vector<int>& weights, int days) 
    {
        int n= weights.size();
        int l=*max_element(weights.begin(), weights.end());
        int sum=0;
        int ans;
        for(int i=0;i<n;i++)
        sum+= weights[i];

        int r=sum;

        while(l<=r)
        {
            int mid= (l+r)/2;

            int s=0, c=1;

            for(int i=0;i<n;i++)
            {
                if(s+weights[i]<=mid)
                {
                    s+= weights[i];
                }
                else
                {
                    c++;
                    s=0;
                    i--;
                }
            }

            if(c<=days)
            {
                ans=mid;
                r=mid-1;
            }

            else
            {
                l=mid+1;
            }
        }

        return ans;
    }
};