#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends

class Solution{
    public:
    
    string modify (string s)
    {
      
       
           if(s[0]<=90&&s[0]>=65)
           {      for(int i=1;i<s.length();i++)
              { if(s[i]>=97&&s[i]<=125)
               s[i]=s[i]-32;
               else 
               continue;
              } 
           }
           else
           {   for(int i=1;i<s.length();i++)
               { if(s[i]<=95&&s[i]>=65)
               s[i]=s[i]+32;
               else
               continue;
               }
           }
           return s;
      
  }
};

// { Driver Code Starts.
int main()
{
    int t; cin >> t;
    while (t--)
	{
		string s; cin >> s;
		Solution ob;
		cout << ob.modify (s) << endl;
	}
}  // } Driver Code Ends
