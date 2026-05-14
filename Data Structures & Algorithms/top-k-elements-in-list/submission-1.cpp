class Solution {
   public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> hashMap;

        for (int i = 0; i < nums.size(); i++) {
            hashMap[nums[i]]++;
        }

        vector<pair<int, int>> arr(hashMap.begin(), hashMap.end());

        sort(arr.begin(), arr.end(), [](auto& a, auto& b) { return a.second > b.second; });

        vector<int> result;

        for (int i = 0; i < k; i++) result.push_back(arr[i].first);

        return result;
    }
};
