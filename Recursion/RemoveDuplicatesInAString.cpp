#include <iostream>
#include <string>
using namespace std;

void removeDuplicate(string s, string ans, int i, int arr[26]) {
    if (i == s.size()) {
        cout << ans << endl;
        return;
    }

    int charIdx = s[i] - 'a';

    if (arr[charIdx] == 0) {
        ans += s[i];
        arr[charIdx] = 1;
        removeDuplicate(s, ans, i + 1, arr);
    }
    else {
        removeDuplicate(s, ans, i + 1, arr);
    }
}

int main() {
    string s = "heellooo";
    string ans = "";
    int arr[26] = {0};

    removeDuplicate(s, ans, 0, arr);
}