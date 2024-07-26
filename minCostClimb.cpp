class Solution
{
public:
  int minCostClimbingStairs(vector<int> &cost, int N)
  {
    // Write your code here
    if (N == 0)
      return cost[0];
    if (N == 1)
      return min(cost[0], cost[1]);

    int first = cost[0];
    int second = cost[1];

    for (int i = 2; i < N; i++)
    {
      int current = min(first, second) + cost[i];
      first = second;
      second = current;
    }
    return min(first, second);
  }
};