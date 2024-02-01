// link : https://leetcode.com/problems/contains-duplicate/
class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int temp=-12345;
        if(nums.size()==0){
            return false;
        }
        for (auto x : nums) {
            if(temp==x){
                return true;
            }
            temp = x;
        } 
        return false;
    }
};
