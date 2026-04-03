class Solution {
public:
    int maxArea(vector<int>& heights) {
        int maxarea=0;
        int n=heights.size();
        for(int i=0;i<n-1;i++){
            for(int j=i+1;j<n;j++){
                int a=min(heights [i], heights [j]);
                int b=j-i;
                int area=a*b;
                maxarea=max(maxarea,area);
            }
        }
        return maxarea;
    }
};
