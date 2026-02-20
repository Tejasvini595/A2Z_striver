class Solution 
{
public:
    string reverseWords(string s) 
    {
        int len= s.length();
        int i=0;
        int l=0,r=0;
        reverse(s.begin(), s.end());
        while(i<len)
        {
            while(i<len&& s[i]==' ')
            {
                i++;
                continue;
            }

            if(i==len)
            break;

            while(i<len&& s[i]!=' ')
            {
                s[r++]= s[i++];
            }

            reverse(s.begin()+l, s.begin()+r);

            s[r++]= ' ';
            l=r;
            i++;

        }

        s.resize(r-1);

        return s;
    }
};