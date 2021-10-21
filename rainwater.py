class Solution {
public:
    int trap(vector<int>& height) {
        int n=height.size();
        int res=0;
        int lmax[n];
        int rmax[n];
        lmax[0]=height[0];
        for(int i=1;i<n;i++)
        {
            lmax[i]=max(lmax[i-1],height[i]);
        }
        rmax[n-1]=height[n-1];
        for(int j=n-2;j>=0;j--)
        {
            rmax[j]=max(rmax[j+1],height[j]);
        }
        for(int k=1;k<n-1;k++)
        {
            res+=min(lmax[k],rmax[k])-height[k];
        }
        return res;
    }
};