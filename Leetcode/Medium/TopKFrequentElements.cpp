class Solution {
public:
    std::vector<int> topKFrequent(std::vector<int>& nums, int k) {
        std::unordered_map<int, int> frequencies;
        for(int n : nums) frequencies[n]++;
        priority_queue<pair<int, int>> pq;
        vector<int> topK;
        for(auto i  = frequencies.begin(); i != frequencies.end(); i++) {
            pq.push(make_pair(i->second, i->first));
            if(pq.size() > (int) frequencies.size() - k) {
                topK.push_back(pq.top().second);
                pq.pop();
            }
        }
        return topK;
    }
};
