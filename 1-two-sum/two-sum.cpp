class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
     
        for(int i=0; i < nums.size()-1; i++){

            for(int e=i+1; e < nums.size(); e++){

                if(nums[i] + nums[e] == target)
                    return vector<int>{i, e};
            }

        }
        return vector<int>{0, 0};
    }
};