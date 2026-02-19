class Solution 
{
public:
    string removeOuterParentheses(string s) 
    {
        stack<char> st; 
        //vector<int> a(s.length()); //10
        string result;

        int l= s.length(); //10
        //int k=0; //k=0
        for(int i=0;i<l;i++) //0
        {
            if(s[i]=='(')
            {
                if(!st.empty())
                result+=s[i];
                st.push(s[i]);
            }

            if(s[i]==')')
            {
                st.pop();

                if(!st.empty())
                {
                    result+=s[i];
                }
            }

        }
        return result;
    }
};