class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n=nums.size();
        int sumact;
        int sum=0;
        sumact=n*(n+1)/2;
        for(int i=0;i<n;i++){
            sum+=nums[i];
        }
        int miss;
        miss= sumact-sum;
        return miss;
    }
};
