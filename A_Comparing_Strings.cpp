#include <cstdio>
#include <vector>
#include <algorithm>
#include <string>
#include <iostream>

using namespace std;

#define SZ(v) ((int)((v).size()))
#define REP(i, n) for (int i = 0; i < (int)(n); ++i)
#define LOOP(i, b, n) for (int i = (b); i < (int)(n); ++i)

int main()
{
    string a, b;
    cin >> a >> b;
    int n = SZ(a);
    if (n != SZ(b))
    {
        printf("NO\n");
        return 0;
    }
    for (int i = 0; i < (int)(n); ++i)
    {
        if (a[i] != b[i])
        {
            for (int k = (i+1); k < (int)(n); ++k)
            // LOOP(k, i + 1, n)
            {
                if (a[k] == b[i])
                {
                    swap(a[i], a[k]);
                    if (a == b)
                    {
                        break;
                    }
                    swap(a[i], a[k]);
                }
            }
            break;
        }
    }
    if (a == b)
        printf("YES\n");
    else
        printf("NO\n");
    return 0;
}