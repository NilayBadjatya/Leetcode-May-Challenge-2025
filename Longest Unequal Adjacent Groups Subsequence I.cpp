class Solution {
public:
    vector<string> getLongestSubsequence(vector<string>& words, vector<int>& groups) {
        int n = words.size();
        int maxLen = 0;
        vector<string> maxi;
        for(int i = 0; i < n; i++){
            int prev = groups[i], len = 1;
            vector<string> temp;
            temp.push_back(words[i]);
            for(int j = i+1; j < n; j++){
                if(prev != groups[j]){
                    len++;
                    if(maxLen < len){
                        maxLen = len;
                        temp.push_back(words[j]);
                    }
                    prev = groups[j];
                }
            }
            if(temp.size() > maxi.size()){
                maxi = temp;
            }
        }
        return maxi;
    }
};
