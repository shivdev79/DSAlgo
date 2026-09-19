class Solution {
public:
    vector<string> letterCombinations(string digits) {
        if (digits.empty()) return {}; // handle empty input case

        vector<string> ans;
        string output;

        vector<string> mapping = {
            "", "", "abc", "def", "ghi", "jkl",
            "mno", "pqrs", "tuv", "wxyz"
        };

        solve(0, digits, ans, mapping, output);
        return ans;
    }

private:
    void solve(int index, const string &digits,
               vector<string> &ans, const vector<string> &mapping,
               string &output) {
        if (index == digits.size()) {
            ans.push_back(output);
            return;
        }

        int number = digits[index] - '0';
        string value = mapping[number];

        for (char c : value) {
            output.push_back(c);
            solve(index + 1, digits, ans, mapping, output);
            output.pop_back();  // backtrack
        }
    }
};

