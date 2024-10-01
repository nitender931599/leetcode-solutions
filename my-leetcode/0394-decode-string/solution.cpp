class Solution {
public:
    string decodeString(string s) {
        stack<string> strStack; // Stack to store strings
        stack<int> numStack;    // Stack to store numbers
        string curString = "";
        int curNum = 0;

        for (char c : s) {
            if (isdigit(c)) {
                curNum = curNum * 10 + (c - '0'); // To handle multiple digit numbers
            } else if (c == '[') {
                // Push the current string and number into the stacks
                strStack.push(curString);
                numStack.push(curNum);
                curString = "";  // Reset current string
                curNum = 0;      // Reset current number
            } else if (c == ']') {
                // Pop the number and string from the stacks
                int repeatTimes = numStack.top();
                numStack.pop();
                string prevString = strStack.top();
                strStack.pop();
                // Repeat the current string 'repeatTimes' times and append to prevString
                for (int i = 0; i < repeatTimes; i++) {
                    prevString += curString;
                }
                curString = prevString; // Set the new current string
            } else {
                curString += c;  // Append the character to current string
            }
        }
        return curString;
    }
};
