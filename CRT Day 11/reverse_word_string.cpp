#include <iostream>
#include <sstream>
#include <vector>
using namespace std;

class Solution {
public:
    string reverseWords(string s) {
        stringstream ss(s);
        vector<string> words;
        string word;

        // Extract words
        while (ss >> word) {
            words.push_back(word);
        }

        // Reverse words
        string result = "";
        for (int i = words.size() - 1; i >= 0; i--) {
            result += words[i];

            if (i != 0) {
                result += " ";
            }
        }

        return result;
    }
};

int main() {
    Solution obj;

    string s = "  hello world  ";

    cout << obj.reverseWords(s);

    return 0;
}