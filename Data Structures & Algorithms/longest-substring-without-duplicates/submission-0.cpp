class Solution {
public:
    int lengthOfLongestSubstring(string s) {
       int l=0 ; int r=0;
       int n=s.size();  
       int maxlen=0;
       while(r<n) {
        bool duplicate=false;
        for(int i=l;i<r;i++){
            if(s[i]==s[r]){
                l=i+1;
                duplicate =true;
                break;
                
            }
           
        }  
        maxlen=max(maxlen,r-l+1);
        r++;
       }
       return maxlen;
    }
};
