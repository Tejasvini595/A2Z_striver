class Solution 
{
public:
    bool isPalindrome(int x) 
    {
        int p=x, sum=0;

        if(x<0)
        {
            return false;
        }

        while(p!=0)
        {
            int r= p%10;
            if(sum>(INT_MAX/10) || (sum==INT_MAX/10 && r>7))
            {
                return false;
            }
            if(sum<(INT_MIN/10) || (sum==INT_MIN/10 && r<-8))
            return false;
            sum=sum*10+r;
            p/=10;
        }

        if(sum==x)
        return true;
        else
        return false;

    }
};