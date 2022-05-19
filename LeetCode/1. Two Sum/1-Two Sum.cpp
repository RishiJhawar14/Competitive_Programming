class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) 
    {
        unordered_map<int, int> mp;
        vector<int> v;
        
        for(int i=0; i<nums.size(); i++) 
        {
            auto it = mp.find(target - nums[i]);

            if (it != mp.end()) 
            {
                v.push_back(i);
                v.push_back(it->second);
            }

            mp[nums[i]] = i;
        }
        
        return v;
    }
};
