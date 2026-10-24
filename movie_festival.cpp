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

    ll n;
    cin >> n;
    vector<pair<int, int>> v;
    for (int i=0; i<n; i++){
        int a, b;
        cin >> a >> b;
        v.push_back({b,a});

    }

    sort(v.begin(), v.end());
    int t=0;
    int count =0;

    for (int i=0; i<n; i++){
        if (v[i].second >=t){
            t = v[i].first;
            count ++;
        }

        

    }

    cout << count << "\n";



    

    return 0;
}