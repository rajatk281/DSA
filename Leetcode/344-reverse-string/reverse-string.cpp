class Solution {
public:
    void reverseString(vector<char>& s) {
        reverse(s, 0, s.size()-1);
        return ; 
    }
    void reverse(vector<char>& s, int left, int right){
        if (left>=right) return ; 
        swap(s[left], s[right]);
        return reverse(s, left+1, right-1);
    }
};