class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        vector<int> newarr;
        for(int i = 0;i<nums.size();i++){
            newarr.push_back(nums[i]);
        }
        for(int i = 0;i<nums.size();i++){
            newarr.push_back(nums[i]);
        }
        return newarr;
    }
};