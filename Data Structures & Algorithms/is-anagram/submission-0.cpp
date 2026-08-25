class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.length()!= t.length()) return false;

        unordered_map<char,int> mp1;
        unordered_map<char, int> mp2;

        for(char x: s){
            mp1[x]++;
        }
        for(char y: t){
            mp2[y]++;
        }
        if(mp1==mp2) return true;
        return false;
    }
};
