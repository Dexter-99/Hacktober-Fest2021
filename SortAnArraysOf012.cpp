#include <bits/stdc++.h>
using namespace std;
void naive(int a[], int n)
{
  sort(a, a + n);
  for (int i = 0; i < n; i++)
  {
    cout << a[i] << " ";
  }
  cout << endl;
}
void better(int a[], int n)
{
  int z = 0;
  int o = 0;
  int t = 0;
  for (int i = 0; i < n; i++)
  {
    if (a[i] == 0)
      z++;
    else if (a[i] == 1)
      o++;
    else
    {
      t++;
    }
  }
  int idx = 0;
  while (z--)
  {
    a[idx++] = 0;
  }
  while (o--)
  {
    a[idx++] = 1;
  }
  while (t--)
  {
    a[idx++] = 2;
  }
  for (int i = 0; i < n; i++)
    cout << a[i] << " ";
  cout << endl;
}
// Dutch National Flag Algorithm
void optimal(int a[], int n)
{
  int low=0,mid=0,high=n-1;
  while(mid<=high)
  {
    if(a[mid]==0)
    {
      swap(a[mid++],a[low++]);
    }
    else if(a[mid]==1)
    {
      mid++;
    }
    else
    {
      swap(a[mid],a[high--]);
    }
  }  
  for(int i=0;i<n;i++)
  {
    cout<<a[i]<<" ";
  }
  cout<<endl;
}

int main()
{
  int n = 5;
  int a[n ] = {1,0,0,2,0};
  // naive(a, n);
  // better(a, n);
  optimal(a, n);
  return 0;
}