class Solution {
public:
    void sortColors(vector<int>& nums) {
        int k =1;

        while(k<nums.size()){
            for(int i =0;i<nums.size();i++){
                for (int j = i+1; j<nums.size();j++){
                    if(nums[j]<nums[i]){
                        int temp = nums[i];
                        nums[i]=nums[j];
                        nums[j]=temp;
                    }
                }
            }
            k++;
        }
                
    }
};