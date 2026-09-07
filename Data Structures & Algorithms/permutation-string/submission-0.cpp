class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        if(s1.size()>s2.size())
        return false;

        int s1map[26]={};
        int s2map[26]={};

        for(char c:s1){
            s1map[ c -'a']++;
        }

        int L=0; 
        for(int R=0;R<s2.size();R++){
            s2map[s2[R]-'a']++;
            while(s2map[s2[R]-'a']>s1map[s2[R]-'a']){
                s2map[s2[L]-'a']--;
                L++;
            }
            if(R-L+1==s1.size()){
                return true;
            }
        }
        return false;
    }
};
