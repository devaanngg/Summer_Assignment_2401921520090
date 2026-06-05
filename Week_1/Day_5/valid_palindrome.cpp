class Solution {
public:
    bool isPalindrome(string s) {
        string real;
        string reverse;
       int len=s.length();
        for (int i=0;i<len;i++)
        { 
            if(int(s[i])>=97 && int(s[i])<=122)
            {real.push_back(s[i]);
            }
            else if (int(s[i]) >=65 && int(s[i])<=90)
            {
            real.push_back(tolower(s[i]));
            }
            else if (int(s[i]) >= 48 && int(s[i]) <= 57) {
            real.push_back(s[i]);
            }

            else
             continue;

            
        }
        for (int j=len-1;j>=0;j--)
        { 
            if(int(s[j])>=97 && int(s[j])<=122)
            {reverse.push_back(s[j]);
            }
             else if(int(s[j]) >=65 && int(s[j])<=90)
            {
            reverse.push_back(tolower(s[j]));
            }
            else if (int(s[j]) >= 48 && int(s[j]) <= 57) {
             reverse.push_back(s[j]);
            }
            else
             continue;

            
        }
        if(real==reverse)
        {
            return true;
        }
        else 
        return false;
    }
};
