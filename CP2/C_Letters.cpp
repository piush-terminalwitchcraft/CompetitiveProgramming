#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long n, m, b;
    long long a[200005];
    int i;
    cin >> n >> m;
    for (i = 1; i <= n; i++)
    {
        cin >> a[i];
    }
    long long s = 0;
    int j = 0;
    for (i = 1; i <= m; i++)
    {
        cin >> b;
        while (s + a[j] < b)
        {
            s = s + a[j];
            j++;
        }
        cout << j << " " << b - s << endl;
    }
}