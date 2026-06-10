class Solution {
public:
    bool isSubsequence(string s, string t) {
        int s_length=s.size();
        int t_length=t.size();
        int index=0;
        for(int i=0;i<t_length;i++)
        {
            if(s[index]==t[i])
            {
                index++;
            }
            else
            continue;

        }
        if (index==s_length)
           return true ;
        else
        return false;   
    }
};
