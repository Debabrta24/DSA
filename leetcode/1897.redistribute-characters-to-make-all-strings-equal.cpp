/*
 * @lc app=leetcode id=1897 lang=cpp
 *
 * [1897] Redistribute Characters to Make All Strings Equal
 */

// @lc code=start
class Solution
{
public:
    // // approach_1
    // bool makeEqual(vector<string> &words)
    // {
    //     unordered_map<char, int> mp;
    //     int n = words.size();
    //     for (string &word : words)
    //     {
    //         for (char &ch : word)
    //         {
    //             mp[ch]++;
    //         }
    //     }
    //     for (auto &it : mp)
    //     {
    //         int freq = it.second;
    //         if (freq % n != 0)
    //         {
    //             return false;
    //         }
    //     }
    //     return true;
    // }

    //  // approach 2
    // bool makeEqual(vector<string>& words) {
    //     int n = words.size();
    //     // unordered_map<char, int> mp;
    //     int count[26]={0};
    //     for (string& word : words) {
    //         for (char& ch : word) {
    //             count[ch-'a']++;
    //         }
    //     }
    //     for (auto& freq : count) {
    //         if (freq % n != 0) {
    //             return false;
    //         }
    //     }
    //     return true;
    // }

    // approach 4 with STL
    bool makeEqual(vector<string> &words)
    {
        int n = words.size();
        // unordered_map<char, int> mp;
        int count[26] = {0};
        for (string &word : words)
        {
            for (char &ch : word)
            {
                count[ch - 'a']++;
            }
        }

        auto lamba = [&](int freq)
        { return freq % n == 0; };
        return all_of(begin(count), end(count), lamba);
    }
};
// @lc code=end
