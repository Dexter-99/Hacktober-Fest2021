#include <bits/stdc++.h>
using namespace std;
void merge(int a[], int b[], int n, int m)
{
  int gap = ceil((n + m) / 2.0);
  int i, j;
  while (gap > 0)
  {
    for (i = 0; i + gap < n; i++)
    {
      if (a[i] > a[i + gap])
        swap(a[i + gap], a[i]);
    }
    j = gap > n ? gap - n : 0;
    while (i < n && j < m)
    {
      if (a[i] > b[j])
      {
        swap(a[i], b[j]);
      }
      i++;
      j++;
    }
    if (j < m)
    {
      for (j = 0; j + gap < m; j++)
      {
        if (b[j] > b[j + gap])
          swap(b[j], b[j + gap]);
      }
    }
    if (gap / 2 == 0)
      break;
    gap = ceil(gap / 2.0);
  }
  for (int i = 0; i < n; i++)
    cout << a[i] << " ";
  for (int i = 0; i < m; i++)
    cout << b[i] << " ";
  cout << endl;
}
int main()
{
  int n = 4, m = 3;
  int a[n] = {3, 27, 38, 43};
  int b[m] = {9, 10, 82};
  merge(a, b, n, m);
  return 0;
}