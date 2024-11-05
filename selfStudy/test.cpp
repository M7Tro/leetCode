#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

vector<int> twoSum (vector<int>& nums, int target){
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

int main(){
    vector<int> nums = {1, 2, 6, 7, 8, 9};

    cout << twoSum(nums, 14)[0] << " " << twoSum(nums, 14)[1] << endl;

    return 0;
}