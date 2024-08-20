class Solution {
public:
    std::vector<int> topKFrequent(std::vector<int>& nums, int k) {
        // Step 1: Calculate frequencies
        std::unordered_map<int, int> frequencies;
        for (int num : nums) {
            frequencies[num]++;
        }

        std::vector<std::pair<int, int>> freqVec(frequencies.begin(), frequencies.end());

        std::sort(freqVec.begin(), freqVec.end(), [](const std::pair<int, int>& a, const std::pair<int, int>& b) {
            return a.second > b.second;
        });

        std::vector<int> result;
        for (int i = 0; i < k; i++) {
            result.push_back(freqVec[i].first);
        }

        return result;
    }
};
