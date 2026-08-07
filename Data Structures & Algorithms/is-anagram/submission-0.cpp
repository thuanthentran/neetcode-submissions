class Solution {
public:
    bool isAnagram(string s, string t) {
        if (s.length() != t.length()) return false;

        unordered_map<char, int> temp1;
        unordered_map<char, int> temp2;
        
        for (char unit : s) temp1[unit]++;
        for (char unit : t) temp2[unit]++;
        
        for (auto pair : temp1)
        {
            char key = pair.first;
            int count = pair.second;
            if (temp2[key]!=count) return false;
        }
        
        return true;
    }
};