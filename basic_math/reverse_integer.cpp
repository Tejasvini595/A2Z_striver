class Solution 
{
public:
    int reverse(int x) 
    {
           int p= x;
           int sum=0;
           while(p!=0) //12
           {
            int r= p%10; //2

            if(sum>(INT_MAX/10) || (sum==(INT_MAX/10) && r>7))
            return 0;

            if(sum<(INT_MIN/10) || (sum==(INT_MIN/10) && r<-8))
            return 0;

            sum= sum*10+r; //32
            p=p/10; //12
           }
           return sum;
    }
};