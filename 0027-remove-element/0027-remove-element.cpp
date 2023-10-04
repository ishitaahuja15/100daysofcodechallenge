class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int k=0;
        vector <int> vec;
        for(int i =0; i<nums.size();i++){
            if(nums[i]!=val){
                vec.push_back(nums[i]);
                k++;
            }
            
        }
        nums = vec;
        return k;
    }
};