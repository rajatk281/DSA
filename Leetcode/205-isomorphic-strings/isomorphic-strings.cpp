class Solution {
public:
    bool isIsomorphic(string s, string t) {
        string changedStr = ""; 
        unordered_map<char, char> mp ; 
        unordered_map<char, char> mp1 ; 
        for (int i=0; i<s.size(); i++){

            if (mp.find(s[i]) != mp.end() && mp[s[i]] != t[i]) return false; 
            if (mp1.find(t[i]) != mp1.end() && mp1[t[i]] != s[i]) return false; 

            mp.emplace(s[i], t[i]);
            mp1.emplace(t[i], s[i]);
        }
        for (char ch: s){
            changedStr+=mp[ch];
        }
        cout<<changedStr;
        if (changedStr==t) return true; 
        return false; 
    }
};