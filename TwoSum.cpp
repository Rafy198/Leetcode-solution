#include <vector>
using namespace std;
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        for(int i = 0;i < nums.size();i++){
            for(int j = i+1; j < nums.size();j++){
                if(nums[i]+nums[j] == target){
                    return {i,j};
                }
            }
        }
        return {};
    }
    int searchInsert(vector<int>& nums, int target){
        int n = 0;
        for(int i = 0;i < nums.size();i++){
            if(nums[i] == target){
                n = i;
                return n;
            }
        }
        for(int i = 0;i < nums.size();i++){
            if(nums[i] >= target){
                return i;
            }
        }
        return nums.size();
    }
};
