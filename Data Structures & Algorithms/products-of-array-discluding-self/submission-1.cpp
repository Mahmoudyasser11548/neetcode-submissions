class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size(), product = 1;
        vector<int> products;

        for(int i = 0;i < n;i++) {
            for(int j = 0;j < n;j++) {
                if(i == j) continue;

                product = product * nums[j];
            }
           
            products.push_back(product);
            product = 1;
        }

        return products;
    }
};
