#include<vector>
using namespace std;

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        for(int i = 0; i < nums.size();i++){
            for(int j = i+1; j < nums.size();j++){
                if(nums[i] == nums[j]){
                    nums.erase(nums.begin()+j);j--;
                }
            }
        }
        nums.shrink_to_fit();
        return nums.size();
    }
        int removeElement(vector<int>& nums, int val) {
        for(int i = 0;i < nums.size(); i++){
            if(nums[i] == val){
                nums.erase(nums.begin() + i); i--;
            }
        }
        int k = 0;
        for(int i = 0;i < nums.size();i++){
            k++;
        }
        return k;
    }
};
