#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <map>
#include <set>
#include <queue>
#include <cmath>
#include <numeric>
using namespace std;

typedef long long ll;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;
    vector<pair<int, int>> v;
    for (int i=0; i<n; i++){
        ll a, b;
        cin >> a >> b;
        v.push_back({a,b});
    }

    sort(v.begin(), v.end());

    ll sum=0, sum1=0, diff;
    for (int i =0; i<n; i++){
        sum += v[i].first;
        diff = v[i].second-sum;
        sum1+=diff;
    }


    cout << sum1<< "\n";
    return 0;
}