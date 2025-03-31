class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int maxx=0 ;
        int cur=0;
        for(int i=0;i<nums.size() ;i++) {
            if(nums[i] == 1) cur++;
            if(nums[i] == 0) cur=0;
            maxx = max(cur,maxx);
        }
        return maxx;
    }
};
