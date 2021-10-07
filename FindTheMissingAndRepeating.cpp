#include <bits/stdc++.h>
using namespace std;
void naive(int a[], int n)
{
  sort(a, a + n);
  int rep = 0, mis = 0;
  for (int i = 0; i < n - 1; i++)
  {
    if (a[i] == a[i + 1])
    {
      rep = a[i];
    }
    if (a[i + 1] - a[i] > 1)
    {
      mis = a[i] + 1;
    }
  }
  cout << "Missing " << mis << endl;
  cout << "Repeating " << rep << endl;
}
void better(int a[], int n)
{
  int aux[n + 1] = {0};
  int rep = 0, mis = 0;
  for (int i = 0; i < n; i++)
  {
    aux[a[i]]++;
  }
  for (int i = 1; i <= n; i++)
  {
    if (aux[i] == 2)
    {
      rep = i;
    }
    else if (aux[i] == 0)
    {
      mis = i;
    }
  }
  cout << "Missing " << mis << endl;
  cout << "Repeating " << rep << endl;
}
// Does Not modifies the given array
// Uses Bit Manipulation
void optimal2(int a[], int n)
{
  int _xor = 0;
  for (int i = 0; i < n; i++)
  {
    _xor ^= a[i] ^ (i + 1);
  }
  int setBit = _xor & ~(_xor - 1);

  int res1 = 0, res2 = 0;
  for (int i = 0; i < n; i++)
  {
    if (a[i] & setBit)
    {
      res1 ^= a[i];
    }
    else
    {
      res2 ^= a[i];
    }
  }

  for (int i = 1; i <= n; i++)
  {
    if (i & setBit)
    {
      res1 ^= i;
    }
    else
    {
      res2 ^= i;
    }
  }

  cout << "Missing " << res1 << endl;
  cout << "Repeating " << res2 << endl;
}
// Modifies the given array
void optimal(int a[], int n)
{

  int rep = 0, mis = 0;

  for (int i = 0; i < n; i++)
  {
    int idx = abs(a[i]) - 1;
    if (a[idx] < 0)
    {
      rep = idx + 1;
    }
    else
    {

      a[idx] *= -1;
    }
  }
  for (int i = 0; i < n; i++)
  {
    if (a[i] > 0)
    {
      mis = i + 1;
    }
  }
  cout << "Missing " << mis << endl;
  cout << "Repeating " << rep << endl;
}

int main()
{
  int n = 6;
  int a[n] = {4, 3, 6, 2, 1, 1};
  naive(a, n);
  better(a, n);
  optimal2(a, n);
  optimal(a, n);
  return 0;
}