class Solution {
public:

    bool isVowel(char c) {
        return c=='a' || c=='e' || c=='i' || c=='o' || c=='u';
    }

    int vowelCount(const string& word) {
        int count = 0;
        for(char c : word) {
            if(isVowel(c)) count++;
        }
        return count;
    }
    
    string reverseWords(string s) {
        vector<string> words;
        string temp;

        for(char c : s) {
            if(c == ' ') {
                words.push_back(temp);
                temp.clear();
            } else {
                temp += c;
            }
        }
        words.push_back(temp);

        int firstVowelCount = vowelCount(words[0]);

        for(int i = 1; i < words.size(); i++) {
            if(vowelCount(words[i]) == firstVowelCount) {
                reverse(words[i].begin(), words[i].end());
            }
        }

        string result;
        for(int i = 0; i < words.size(); i++) {
            result += words[i];
            if(i < words.size() - 1) result += " ";
        }

        return result;
    }
};
