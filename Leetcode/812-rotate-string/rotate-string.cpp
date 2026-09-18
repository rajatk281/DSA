class Solution {
public:
    bool rotateString(string s, string goal) {
        string newStr = s;
        int t=0; 
        while(t<s.size()){
            newStr = newStr.substr(1, newStr.size()-1) + newStr.substr(0, 1);
            cout<<newStr;
            if (newStr==goal){
                return true; 
            } 
            t++; 
        }
        
        return false; 
    }
};