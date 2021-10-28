#include<iostream>
using namespace std;


 // } Driver Code Ends
class Solution
{
    public:
    int isPowerOfFour(unsigned int n)
    {  int mul=1;
        for(int i=0;i<n;i+=4)
        { 
            
            mul=mul*4;
            if(mul==n)
            return 1;
          else if(n==1)
            return 1;
           
        }return 0;
    }
};



// { Driver Code Starts.

/*Driver program to test above function*/
int main()
{
int t,n;
cin>>t;
while(t--)
{
cin>>n;
Solution ob;
if(ob.isPowerOfFour(n))
	cout<<1<<endl;
else
	cout<<0<<endl;
}
//getchar();
}
  // } Driver Code Ends
