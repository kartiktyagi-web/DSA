class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        vector<int> positives, negatives;
        
        for (int x : nums) {
            if (x > 0) positives.push_back(x);
            else        negatives.push_back(x);
        }
        
        vector<int> result;
        for (int i = 0; i < positives.size(); i++) {
            result.push_back(positives[i]);
            result.push_back(negatives[i]);
        }
        
        return result;
    }
};