class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) 
    {
        vector<int> result;
        for(int i=0;i<nums.size();i++)
        {
            for(int j=i+1;j<nums.size();j++)
            {
                if(nums[i]+nums[j]==target)
                {
                    vector<int> result = { i, j };
                    return result;
                
                }
            }
        } 
        return (result);
    }
};
 
/*class Solution:
    def twoSum(self, nums: List[int], target: int) -> List[int]:
        for i in range(len(nums)):
            for j in range (i+1, len(nums)):
                if nums[i]+nums[j] == target :
                    return [i,j]
                    */