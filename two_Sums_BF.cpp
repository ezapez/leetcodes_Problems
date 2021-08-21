class Solution{
public:
    vector<int> twoSum(vector<int>& nums, int target){
        vector<int> ret;
        int size = sums.size();
        for(int i = 0; i < size -1; i++)
        {
            for(int j = i+1; j < size; j++)
            {
                if(nums[i] + nums[j] == target)
                {
                    ret.push_back(i);
                    ret.push_back(j);
                    return ret;
                }
            }
        }
        return ret;
    }
};


// time complexity of 0(n^2)


