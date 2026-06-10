class Solution {
public:
    int firstUniqChar(string s) {
        int n=s.length();
        
        unordered_map<char,int> count_char;

        for(char c : s)
        {
            count_char[c]++;
        }
        for(int i=0;i<n;i++)
        {
            if(count_char[s[i]]==1)
            return i;

        }
        return -1;
        
    }
};
