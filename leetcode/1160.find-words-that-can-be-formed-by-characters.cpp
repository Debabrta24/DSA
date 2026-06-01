/*
 * @lc app=leetcode id=283 lang=cpp
 *
 * [283] Move Zeroes
 */

// @lc code=start


class Solution {
public:
    int countCharacters(vector<string>& words, string chars) {
        vector<int> charcount(26, 0);
        for (char& ch : chars) {
            charcount[ch - 'a']++;
        }
        int result = 0;
        for (string& word : words) {
            vector<int> wordsCount(26, 0);
            for (char& ch : word) {
                wordsCount[ch - 'a']++;
            }
            bool ok = true;
            for (int i = 0; i < 26; i++) {
                if (wordsCount[i] > charcount[i]) {
                    ok = false;
                    break;
                }
            }
            if (ok == true) {
                result += word.length();
            }
        }
        return result;
    }
    };
