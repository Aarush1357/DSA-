class Solution {
public:
    int findGCD(vector<int>& nums) {
        int mn=INT_MAX,mx=INT_MIN;
        for(int i:nums)mn=min(i,mn),mx=max(i,mx);
        return gcd(mn,mx);    
    }
};