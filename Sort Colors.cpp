class Solution {
public:

    void countingSort(vector<int>& nums){
        unordered_map<int, int> mp;
        for(auto& x : nums){
            mp[x]++;
        }
        int j = 0;
        for(int i = 0; i < 3; i++){
            while(mp[i]--){
                nums[j++] = i;
            }
        }
    }

    void sortColors(vector<int>& nums) {
        countingSort(nums);
    }
};
