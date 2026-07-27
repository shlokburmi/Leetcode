class Solution {
public:
int maxProduct(vector<int>& nums) {
        int slarge = -1;
        int large = nums[0];
        for(int i=1;i<nums.size();i++){
            if(nums[i]>large){
                slarge = large;
                large = nums[i];
            }
            else if (nums[i]>slarge){
                slarge = nums[i];
            }
        }
        return (large-1)*(slarge-1);
        
    }
};