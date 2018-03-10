class Solution {
public:
    int distributeCandies(vector<int>& candies) {
        set<int> diff;
        for(auto& i : candies){
            diff.insert(i);
        }
        if(diff.size() > candies.size() / 2)
            return candies.size() / 2;
        else
            return diff.size();      
    }
};