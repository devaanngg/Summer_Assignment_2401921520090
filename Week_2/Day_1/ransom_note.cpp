class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        int ransom_length=ransomNote.size();
        int maga_length=magazine.size();
        if(ransom_length>maga_length) return false;
        unordered_map<char,int> ransom;
        unordered_map<char,int> maga;
        for(int i=0;i<ransom_length;i++)
        {
           ransom[ransomNote[i]]++; 
        }
        for(int i=0;i<maga_length;i++)
        {
           maga[magazine[i]]++; 
        }
        for(int i=0;i<ransom_length;i++)
        {
            if(maga[ransomNote[i]]<ransom[ransomNote[i]])
            return false;
        }
        return true;

        
    }
};
