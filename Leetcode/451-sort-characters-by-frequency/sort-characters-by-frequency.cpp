class Solution {
public:
    string frequencySort(string s) {
        vector<int> hp(256);
        string ans = "";

        map<int, vector<char>, greater<int>> mp;

        // Count frequency of every character
        for (char ch : s) {
            hp[(unsigned char)ch]++;
        }

        // Store: frequency -> characters
        for (int i = 0; i < 256; i++) {
            if (hp[i] > 0) {
                mp[hp[i]].push_back((char)i);
            }
        }

        // Traverse frequencies from highest to lowest
        for (auto& p : mp) {
            int freq = p.first;

            for (char ch : p.second) {
                for (int j = 0; j < freq; j++) {
                    ans += ch;
                }
            }
        }

        return ans;
    }
};