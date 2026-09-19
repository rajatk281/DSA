class Solution {
public:

    int symbolMean(char ch){
        if (ch=='I') return 1; 
        if (ch=='V') return 5; 
        if (ch=='X') return 10; 
        if (ch=='L') return 50; 
        if (ch=='C') return 100; 
        if (ch=='D') return 500; 
        if (ch=='M') return 1000; 
        return 0; 
    }

    int romanToInt(string s) {
        int finalVal=0; 
        for (int i=0; i<s.size(); i++){
            if ((i+1) < s.size() && symbolMean(s[i])<symbolMean(s[i+1])){
                i++;
                finalVal += symbolMean(s[i])-symbolMean(s[i-1]);
            }else{
                finalVal += symbolMean(s[i]);
            }
        }
        return finalVal;
    }
};