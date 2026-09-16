
class Solution {
public:
    string reverseWords(string s) {

        // stringstream helps us extract words easily.
        // It automatically ignores:
        // 1. Leading spaces
        // 2. Trailing spaces
        // 3. Multiple spaces between words
        stringstream ss(s);

        // Store all the extracted words
        vector<string> words;

        string word;

        // Extract each word from the string
        // Example:
        // "a good   example"
        // → "a", "good", "example"
        while (ss >> word) {
            words.push_back(word);
        }

        // Reverse the order of words
        // Example:
        // {"a", "good", "example"}
        // → {"example", "good", "a"}
        reverse(words.begin(), words.end());

        // This will store our final answer
        string ans;

        // Add the reversed words to the answer
        for (int i = 0; i < words.size(); i++) {

            // Add the current word
            ans += words[i];

            // Add a single space between words
            // We don't add a space after the last word
            // to avoid trailing spaces.
            if (i != words.size() - 1) {
                ans += " ";
            }
        }

        // Return the final reversed string
        return ans;
    }
};
