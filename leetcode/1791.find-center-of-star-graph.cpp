/*
 * @lc app=leetcode id=1791 lang=cpp
 *
 * [1791] Find Center of Star Graph
 */

// @lc code=start
class Solution {
public:
    // // approach_1
    // int findCenter(vector<vector<int>>& edges) {
    //     unordered_map<int, int> degree;
    //     for (auto& vec : edges) {
    //         int u = vec[0];
    //         int v = vec[1];
    //         degree[u]++;
    //         degree[v]++;
    //     }
    //     for (auto& it : degree) {
    //         if (it.second == edges.size()) {
    //             return it.first;
    //         }
    //     }
    //     return -1;
    // }
    //best approach 
    int findCenter(vector<vector<int>>& edges) {
        vector<int> first = edges[0];  //{a,b}
        vector<int> second = edges[1]; //{b,c}
        if (first[0] == second[0] || first[0] == second[1]) {
            return first[0];
        }
        return first[1];
    }
};
// @lc code=end

