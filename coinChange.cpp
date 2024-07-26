class Solution
{
public:
  int coinChange(vector<int> &coins, int amount)
  {
    vector<int> amt(amount + 1, amount + 1);
    amt[0] = 0;
    for (int i = 1; i <= amount; i++)
    {
      for (int j = 0; j < coins.size(); j++)
      {
        if (i >= coins[j])
        {
          amt[i] = min(amt[i], 1 + amt[i - coins[j]]);
        }
      }
    }
    return amt[amount] > amount ? -1 : amt[amount];
  }
};
