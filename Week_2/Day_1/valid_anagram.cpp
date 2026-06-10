class Solution {
public:
    bool isAnagram(string s, string t) {
       
        int length_s=s.length();
        int lengtht=t.length();
        if(length_s!=lengtht) return false;

        unordered_map <char,int> counts;
        unordered_map <char,int> countt;
        for(int i=0;i<length_s;i++)
        {
            counts[s[i]]++;
            countt[t[i]]++;
        }
        if(countt==counts)
        return true;
        else 
        return false;


        
    }
};
