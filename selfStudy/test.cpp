#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

vector<int> twoSum(vector<int> nums, int target){   
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

int main() {

    vector<int> nums = {1, 3, 6, 7, 8, 12};
    int target = 11;

    vector<int> indexes = twoSum(nums ,target);

    cout << indexes[0] << " " << indexes[1] << endl;

    return 0;
}

