class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int sum;
        for(int i=0; i<nums.size(); i++){
            for (int j=0 ; j<nums.size() ; j++){
                if(i!=j){
                sum= nums[i] + nums[j] ;
                if (sum == target){
                    vector<int>a={i , j};
                    return a;
                }
                }
            }
        }
        return {};
    }
};