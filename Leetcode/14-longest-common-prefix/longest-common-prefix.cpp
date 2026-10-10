class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string prefix = ""; 
        map<string, int> mp ; 
        for (string val: strs){
            mp.emplace(val, val.size());
        }
        for (int i = 0; i<mp.begin()->second; i++){
            if (mp.begin()->first[i]!=prev(mp.end())->first[i]){
                break;
            }else{
                prefix+=mp.begin()->first[i];
            }
        }
        return prefix; 
    }
};