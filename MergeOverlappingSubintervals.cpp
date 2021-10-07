#include <bits/stdc++.h>
using namespace std;
void mergeIntervals(vector<pair<int, int>> &a)
{
  int n = a.size();
  sort(a.begin(), a.end());
  vector<pair<int, int>> res;
  pair<int, int> merged = a[0];
  for (int i = 1; i < n; i++)
  {
    if (a[i].first <= merged.second)
    {
      merged.second = max(merged.second, a[i].second);
    }
    else
    {
      res.push_back(merged);
      merged = a[i];
    }
  }
  res.push_back(merged);
  for (int i = 0; i < res.size(); i++)
  {
    cout << res[i].first << "," << res[i].second << endl;
  }
}
int main()
{
  vector<pair<int, int>> res = {{1, 3}, {2, 6}, {8, 10}, {15, 18}};
  mergeIntervals(res);
  return 0;
}