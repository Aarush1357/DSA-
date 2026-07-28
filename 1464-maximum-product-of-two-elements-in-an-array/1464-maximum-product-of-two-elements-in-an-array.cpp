class Solution {
public:
    int maxProduct(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int largest = nums.size() - 1;
        int secLargest = nums.size() - 2;
        return((nums[largest] - 1)*(nums[secLargest] - 1));  
    }
};