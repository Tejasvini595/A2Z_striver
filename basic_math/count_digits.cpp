class Solution {
public:
    int countDigit(int n) {
        int c=0;
        int p= n;
        while(p!=0)
        {
            p=p/10;
            c++;
        }
        return c;
    }
};