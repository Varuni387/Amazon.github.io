#include <bits/stdc++.h>
const int mod = 1e9 + 7;
using namespace std;



class Solution
{
    public:
    int table(string s,string t,int n1,int n2)
{
	vector<vector<int>> dp(n1+1,vector<int>(n2+1,0));
	for(int i=1;i<=n1;i++)
	{
		for(int j=1;j<=n2;j++)
		{
			if(s[i-1]==t[j-1])
			{
				dp[i][j]=1+dp[i-1][j-1];
			}
			else
			{
				dp[i][j]=max(dp[i-1][j],dp[i][j-1]);
			}
		}
	}
    return dp[n1][n2];

}

    int lcs(int n, int m, string s1, string s2)
    {
        return table(s1,s2,n,m);
    }
};



int main() {
    int t, n, m;
    cin >> t;
    while (t--) {
        cin >> n >> m;
        string str1, str2;
        cin >> str1 >> str2;
        Solution ob;
        cout << ob.lcs(n, m, str1, str2) << endl;
    }
    return 0;
}

