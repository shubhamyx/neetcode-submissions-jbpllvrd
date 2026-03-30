class Solution {
public:
    int longestConsecutive(vector<int>& nums) {

        if(nums.size()==0){
            return 0;
        }
        sort(nums.begin(),nums.end());
        int count=1;
        int lcount=1;
        
        for(int i=1;i<nums.size();i++){
            if(nums[i-1]==nums[i]){
                continue;
            }
            else if(nums[i-1]+1==nums[i]){
                count=count+1;
            }
            else{
                lcount=max(count,lcount);
                count=1;
            }
        }
        return max(count,lcount);
        
    }
};
