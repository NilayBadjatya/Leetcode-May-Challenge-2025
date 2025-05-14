class Solution {
public:
    int MOD = 1e9 + 7;
    int lengthAfterTransformations(string s, int t, vector<int>& nums) {
        vector<int> mp(26, 0);
        for(auto& ch : s){
            mp[ch - 'a']++;
        }
        while(t--){
            vector<int> new_mp(26, 0);
            for(int i = 0; i <= 25; i++){
                if(mp[i] == 0) continue;
                int next = 1;
                while(next <= nums[i]){
                    int nextIdx = (i + next) % 26;
                    new_mp[nextIdx] = (new_mp[nextIdx] + mp[i]) % MOD;
                    next++;
                }
            }
            mp = new_mp;
        }
        int ans = 0;
        for(int i = 0; i < 26; i++){
            ans = (ans + mp[i]) % MOD;
        }
        return ans;
    }
};
