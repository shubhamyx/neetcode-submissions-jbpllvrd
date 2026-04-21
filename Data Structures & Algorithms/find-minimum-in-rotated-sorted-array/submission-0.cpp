class Solution {
public:
    int findMin(vector<int> &nums) {
      
        int ans; int minans; 
        int l=0; int r=nums.size()-1;
        while(l<=r){
            int mid=(l+r)/2;
            if(nums[mid]>nums[r]){
                ans=nums[mid];
                minans=min(ans,minans);
                l=mid+1;
            }
            else{
                ans=nums[mid];
                minans=min(ans,minans);
                r=mid-1;
            }
          

        }
        return minans;
    }
};
