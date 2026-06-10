class Solution {
public:
    int strStr(string haystack, string needle) {
        int hay=haystack.length();
        int need=needle.length();
        if(need>hay) return -1;
        int start=0;
        int count=0;

        for(int i=0;i<hay;i++)
        {
            if(haystack[i]==needle[0])
            {
                start=i;
                for(int j=0;j<need;j++)
                {
                    if(haystack[start]==needle[j])
                    {
                        start++;
                        count++;

                    }
                    else { count =0;
                     break;
                    }
                    //if(count==need)
                   // return i;
                }
                if(count==need)
                    return i;
            }

        }
        
    return -1;}
};
