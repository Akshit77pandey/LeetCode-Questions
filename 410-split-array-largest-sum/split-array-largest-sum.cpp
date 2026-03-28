class Solution {
public:

bool isvalid(vector<int>& nums,int n,int m,int max){
    int student=1;
    int pages=0;
    for(int i=0;i<n;i++){
        if(nums[i]>max){
            return false;
        }
        if(pages+nums[i]<=max){
            pages+=nums[i];
        }
        else{
            student++;
            pages=nums[i];
        }
    }
    return student>m?false:true;

}
    int splitArray(vector<int>& nums, int m) {
        int n=nums.size();
        if(m>n)return -1;
        int sum=0;
        for(int i=0;i<n;i++){
            sum+=nums[i];
        }
        int ans=-1;
        int st=0,end=sum;
        while(st<=end){
            int mid=st+(end-st)/2;
            if(isvalid(nums,n,m,mid)){
                ans=mid;
                end=mid-1;
            }
            else{
                st=mid+1;
            }
        }
        return ans;
    }
};