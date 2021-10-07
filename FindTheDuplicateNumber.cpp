#include <bits/stdc++.h>
using namespace std;
void naive(int a[], int n)
{
  sort(a, a + n);
  int rep = 0;
  for (int i = 0; i < n - 1; i++)
  {
    if (a[i] == a[i + 1])
    {
      rep = a[i];
      break;
    }
  }
  cout << "Repeating " << rep << endl;
}
void better(int a[], int n)
{

  unordered_set<int> h;
  int rep = 0;
  for (int i = 0; i < n; i++)
  {
    if (!h.empty() & h.find(a[i]) != h.end())
    {
      rep = a[i];
      break;
    }
    h.insert(a[i]);
  }

  cout << "Repeating " << rep << endl;
}
// Does Not modifies the given array
// Uses Hare Tortoise Algorithm for Cycle Detection
void optimal2(int a[], int n)
{
  int slow = 0, fast = 0;
  do
  {
    slow = a[slow];
    fast = a[a[fast]];
  } while (slow != fast);

  while (slow != fast)
  {
    slow = a[slow];
    fast = a[fast];
  }
  cout << "Repeating " << slow << endl;
}
// Modifies the given array
void optimal(int a[], int n)
{

  int rep = 0;

  for (int i = 0; i < n; i++)
  {
    int idx = abs(a[i]) - 1;
    if (a[idx] < 0)
    {
      rep = idx + 1;
      break;
    }
    else
    {

      a[idx] *= -1;
    }
  }
  cout << "Repeating " << rep << endl;
}

int main()
{
  int n = 4;
  int a[n + 1] = {1, 3, 4, 2, 2};
  naive(a, n + 1);
  better(a, n + 1);
  optimal2(a, n + 1);
  optimal(a, n + 1);
  return 0;
}