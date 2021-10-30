//Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
//User function Template for C++
class Solution {
  public:
    long long count(int N,vector<int> Arr) {
        // code here
        if(N==1)
        return 1;
        int o=0,z=0,sum=0;
        for(int i=0;i<N;i++)
        {
            sum=sum+Arr[i];
            if(Arr[i]==0)
            z++;
            if(Arr[i]==1)
            o++;
        }
        if(o>=1&&z>=1)
        return sum+1;
        if(o>1&&z==0)
        return sum;
        if(o==0&&z>1)
        return 1;
    }
};

// { Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        cin>>N;
        vector<int> Arr(N);
        for(auto &i:Arr)
            cin>>i;
        Solution obj;
        auto ans = obj.count(N,Arr);
        cout<<ans<<endl;
    }
}  // } Driver Code Ends
