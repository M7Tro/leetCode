class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> numMap;
        for(int i = 0; i < nums.size(); i++){
            int remainder = target - nums[i];
        
        if(numMap.find(remainder) != numMap.end()){
            return {numMap[remainder], i};
        }
        numMap[nums[i]] = i;
        }
        return {};
    }
};