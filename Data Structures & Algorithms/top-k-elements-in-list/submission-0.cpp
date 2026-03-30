class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int> Freq;
        for(int i=0;i<nums.size();i++){
            Freq[nums[i]]++;
        }
        priority_queue<pair<int,int>> pq;
        for(auto it:Freq){
            pq.push({it.second,it.first});
        }
        vector<int> result;
        while(k--){
            result.push_back(pq.top().second);
            pq.pop();
        }
        return result;
    }
};
