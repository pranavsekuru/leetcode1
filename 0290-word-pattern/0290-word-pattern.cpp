class Solution {
public:
    bool wordPattern(string pattern, string s) {
        unordered_map<char, string> m;
        set<string> wam; // word already mapped with a char
        vector<string> words;

        string word = "";
        for (int i = 0; i <= s.length(); i++) {
            if (s[i] == ' ' || i == s.length()) {
                words.push_back(word);
                word = "";
            } else {
                word += s[i];
            }
        }

        if (words.size() != pattern.length()) {
            cout << words.size() << " " << pattern.length() << endl;
            cout << "1";
            return false;
        }

        for (int i = 0; i < pattern.length(); i++) {
            if (m.count(pattern[i])) {
                if (m[pattern[i]] != words[i]) {
                    cout << "second false " << i << words[i];
                    return false;
                }
            } else {
                if (wam.count(words[i]) != 1) {
                    m[pattern[i]] = words[i];
                    wam.insert(words[i]);
                }
                else{
                    return false;
                }
            }
        }

        return true;
    }
};