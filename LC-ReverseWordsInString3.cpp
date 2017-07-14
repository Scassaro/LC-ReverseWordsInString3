class Solution {
public:
    string reverseWords(string s) {
        string reverse = "";
        int LastWhiteSpace = 0;
        for(int i = 0; i < s.size(); i++)
        {
            if(s[i] == ' ')
            {
                reverse += FlipWord(s.substr(LastWhiteSpace, i - LastWhiteSpace));
                LastWhiteSpace = i + 1;
                reverse += " ";
            }
            if(i == s.size() - 1)
                reverse += FlipWord(s.substr(LastWhiteSpace, s.size() - LastWhiteSpace));
        }
        return reverse;
    }
    string FlipWord(string original)
    {
        string reversed = "";
        int origsize = original.size();
        for(int i = origsize - 1; i >= 0; i--)
            reversed += original[i];
        return reversed;
    }
};