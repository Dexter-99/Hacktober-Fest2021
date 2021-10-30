#include <bits/stdc++.h> 
using namespace std; 


 // } Driver Code Ends
class Solution{
    public:
        //Function to merge the arrays.
        void merge(long long arr1[], long long arr2[], int n, int m) 
        {
                    int size=n+m;
        int a[size];
        int j=0;
        for(int i=0;i<n;i++)
        {
          
            a[i]=arr1[j];
            j++;
        }
        int k=0;
        for(int i=n;i<size;i++)
        {
         a[i]=arr2[k];
         k++;
        }
        sort(a,a+size);
        int ki=0;
        for(int i=0;i<n;i++)
        {
            arr1[ki]=a[i];
            ki++;
        }
        int ji=0;
        for(int i=n;i<size;i++)
        {
            arr2[ji]=a[i];
            ji++;
        }
        } 
};

// { Driver Code Starts.

int main() 
{ 
	
	int T;
	cin >> T;
	
	while(T--){
	    int n, m;
	    cin >> n >> m;
	    
	    long long arr1[n], arr2[m];
	    
	    for(int i = 0;i<n;i++){
	        cin >> arr1[i];
	    }
	    
	    for(int i = 0;i<m;i++){
	        cin >> arr2[i];
	    }
	    Solution ob;
	    ob.merge(arr1, arr2, n, m); 

        for (int i = 0; i < n; i++) 
            cout<<arr1[i]<<" "; 
        
       
	    for (int i = 0; i < m; i++) 
		    cout<<arr2[i]<<" "; 
	    
	    cout<<endl;
	}

	return 0; 
} 
  // } Driver Code Ends
