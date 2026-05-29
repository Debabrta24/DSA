/*
 * @lc app=leetcode id=242 lang=cpp
 *
 * [242] Valid Anagram
 */

// @lc code=start

// //approach 1
// class Solution {
// public:
//     bool isAnagram(string s, string t) {
//         // approach 1
//         sort(s.begin(),s.end());
//         sort(t.begin(),t.end());
//         return s==t;
//     }
// };

// approach 2
class Solution
{
public:
    bool isAnagram(string s, string t)
    {
        // approach 2
        vector<int> count(26, 0);
        for (char &ch : s)
        {
            count[ch - 'a']++;
        }
        for (char &ch : t)
        {
            count[ch - 'a']--;
        }

        for (int i = 0; i < 26; i++)
        {
            if (count[i] != 0)
            {
                return false;
            }
        }
        return true;
        // ///alternativre of for loop just for knowledge
        //  bool all_zero = all_of(begin(count), end(count),
        //                        [](int element) { return element == 0; });
        // return all_zero;
    }
};

// @lc code=end
