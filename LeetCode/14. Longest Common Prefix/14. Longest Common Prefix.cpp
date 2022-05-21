class Solution {
public:
    string longestCommonPrefix(vector<string>& strs)
    {
        string s;
        char c;
        int m=INT16_MAX;
        bool b=true;

        for(int i=0; i<strs.size(); i++)
        {
            if(m>strs[i].size())
                m=strs[i].size();
        }

        for(int j=0; j<m; j++)
        {
            b=true;
            c=strs[0][j];
            for(int i=1; i<strs.size(); i++)
            {
                if(strs[i][j]!=c && strs.size()>1)
                {
                    b=false;
                    return s;
                }
            }
            if(b)
                s.push_back(c);
        }
        return s;
    }
};
