#include <bits/stdc++.h>

using namespace std;

int g[1025][1025];

int main()
{
    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
#endif
   
    ios::sync_with_stdio(0); 
    cin.tie(0); 
    cout.tie(0);
    

int p, y, x, c, i, j, max, f, s;
    vector<int> v;
    while (cin >> y) {
        cin >> p;
        v.clear();
        while (p--) {
            cin >> x;
            v.push_back(x);
        }
        sort(v.begin(),v.end());
        max = 0;
        for (i = 0; i < v.size(); i++) {
            c = 0;
            for (j = i; j < v.size() && v[j] < v[i] + y; j++)
                c++;
            if (c > max) {
                max = c;
                f = v[i];
                s = v[j - 1];
            }
        }
        cout << max << " " << f << " " << s << endl;
    }

    return 0;
}