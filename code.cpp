#include <bits/stdc++.h>
using namespace std;
#define ll long long
const int N = 1e5 + 5;


int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    freopen("va.inp", "r", stdin);
    freopen("va.out", "w", stdout);

    int h, w;
    cin >> h >> w;
    if (h < 165 || h > 185 || w < 50 || w > 80) cout << "Khong hop le";
    else if (h <= 169 && w < 60) cout << "M";
    else if (h <= 175 && w > 70) cout << "L";
    else cout << "XL";
    return 0;
}
