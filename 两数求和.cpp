class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) 
    {
        vector<int>* result = new vector<int>(2, -1); 
        //初始化为-1，用于表示没有找到符合条件的结果
        for(int i=0;i<nums.size();i++)
        {
            for(int j=i+1;j<nums.size();j++) //j从i+1开始，避免重复计算
            {
                if(nums[i]+nums[j]==target) //找到符合条件的结果
                {
                    (*result)[0] = i;
                    (*result)[1] = j;
                    return (*result);
                }
            }
        }
        return (*result); //没有找到符合条件的结果，返回初始化的值
    }
};
