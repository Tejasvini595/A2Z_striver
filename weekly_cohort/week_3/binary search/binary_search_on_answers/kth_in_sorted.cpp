class Solution {
public:
    int kthSmallest(vector<vector<int>>& matrix, int k) {

        int n= matrix.size();
        int low= matrix[0][0], high= matrix[n-1][n-1];
        int ans;

        while(low<=high)
        {
            int mid= (low+high)/2;

            int r= n-1, c=0;
            int count=0;

            while(r>=0 && r<n && c>=0 && c<n)
            {
                if(matrix[r][c]<=mid)
                {
                    count+= r+1;
                    c++;
                }
                else
                {
                    r--;
                }
            }

            if(count>=k)
            {
                ans=mid;
                high= mid-1;
            }
            else
            {
                low=mid+1;
            }
        }

        return ans;
        
    }
};