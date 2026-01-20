class Solution {
public:
    string sortSentence(string s) {
        vector<string> ans(10);
        string temp = "";
        int index = 0;
        int maxPos = 0;

        while (index < s.length()) {
            if (s[index] == ' ') {
                int pos = temp.back() - '0';
                temp.pop_back();
                ans[pos] = temp;
                maxPos = max(maxPos, pos);
                temp.clear();
            } else {
                temp += s[index];
            }
            index++;
        }

        // Handle last word
        int pos = temp.back() - '0';
        temp.pop_back();
        ans[pos] = temp;
        maxPos = max(maxPos, pos);

        // Build result
        string result = "";
        for (int i = 1; i <= maxPos; i++) {
            result += ans[i];
            if (i != maxPos) result += ' ';
        }

        return result;
    }
};

