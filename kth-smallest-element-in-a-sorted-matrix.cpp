class Solution {
public:
    int kthSmallest(vector<vector<int>>& matrix, int k) {
        vector<int> all;
        for(auto &v : matrix)
            for(auto &c : v)
                all.push_back(c);
        sort(all.begin(), all.end());
        return all[k - 1];
    }
};