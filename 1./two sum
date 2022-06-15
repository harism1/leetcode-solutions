class Solution {
public:
    /*
    make map M <number, index of that number>
    iterate through the array
        try and find number n = target - nums[i]
        if n is not in M, add it
        else if it is in M, return current index i, and M[n]
    */
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> result;
        unordered_map<int, int> m;
        for (int i = 0; i < nums.size(); i++)
        {
            int n = target - nums[i];
            
            if (m.count(n) > 0)
            {
                result.push_back(i);
                result.push_back(m[n]);
                return result;
            }
            m[nums[i]] = i;
        }
        return result;
    }
};
