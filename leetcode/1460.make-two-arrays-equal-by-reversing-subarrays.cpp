/*
 * @lc app=leetcode id=1460 lang=cpp
 *
 * [1460] Make Two Arrays Equal by Reversing Subarrays
 */

// @lc code=start
class Solution {
public:
    // //approach_1
    // bool canBeEqual(vector<int>& target, vector<int>& arr) {
    //     int n=target.size();
    //     sort(begin(target),end(target));
    //      sort(begin(arr),end(arr));
    //     for(int i=0;i<n;i++){
    //         if(target[i]!=arr[i] ){
    //             return false;
    //         }
    //     }
    //     return true;
    // }
    // approach2
    bool canBeEqual(vector<int>& target, vector<int>& arr) {
        unordered_map < int, int > mp;
        for (int& num : target) {
            mp[num]++;
        }
        for(int &num : arr) {
            if (mp.find(num) == mp.end()) {
                return false;
            }
            mp[num]--;
            if (mp[num] == 0) {
                mp.erase(num);
            }
        }
        return mp.size()==0;
    }
};
// @lc code=end

