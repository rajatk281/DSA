class Solution {
public:
    bool isAnagram(string s, string t) {
        if (s.length()!=t.length()) return false; 
        vector<int> hp(26);
        vector<int> hp1(26);
        for (char ch: s){
            int idx = ch-'a';
            hp[idx]++;
        }
        for (char ch: t){
            int idx1 = ch-'a';
            hp1[idx1]++;
        }
        for (int i=0; i<26; i++){
            if (hp[i]!=hp1[i]) return false; 
        }
        return true; 
    }
};