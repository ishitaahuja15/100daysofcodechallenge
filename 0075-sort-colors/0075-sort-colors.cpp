class Solution {
public:
    void sortColors(vector<int>& nums) {
        int zero =0;
        int one = 0;
        int two =0;
        for(int i = 0; i<nums.size();i++){
            if(nums[i]==0){
                zero++;
            }
            else if(nums[i]==1){
                one++;
            }
            else{
                two++;
            }
        }
        nums.clear();
        for(int l =0; l<zero;l++){
            nums.push_back(0);
        }
        for(int j =zero; j<zero+one;j++){
            nums.push_back(1);
        }
        for(int k =one+zero; k<zero+one+two; k++){
            nums.push_back(2);
        }
    }
};