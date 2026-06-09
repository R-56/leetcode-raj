class Solution {
public:
    vector<int> getAverages(vector<int>& nums, int k) {
        long long  n =nums.size();
        long long  sum=0;
    vector<int>ans(n,-1);
    if(2*k+1>n)
    return ans ;
    for(int i =0;i<2*k+1;i++){
        sum=sum+nums[i];
    }
    int left =0;
    int right =2*k;
    for(int i =k;i<n;i++){
        ans[i]=sum /(2*k+1);
        if(right+1<n){
            sum+=nums[right+1]-nums[left];
            left++;
            right++;
        }
        else{
            break;
        }
        
}
    return ans ;
    }
    
};