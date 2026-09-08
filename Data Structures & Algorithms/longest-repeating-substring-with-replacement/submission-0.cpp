class Solution {
public:
    int characterReplacement(string s, int k) {
        int maxlen=0; int l=0; int r=0; int maxfreq=0; unordered_map<char,int> mp;
        while(r<s.size()){
            mp[s[r]]++;
            maxfreq=max(maxfreq,mp[s[r]]);
            while((r-l+1)-maxfreq>k){
                mp[s[l]]--;              
                l++; 
            }
                maxlen=max(maxlen,r-l+1);       
            r++;
        }
        return maxlen;
    }
};
