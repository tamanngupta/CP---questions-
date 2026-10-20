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

    int t;
    cin >> t;
    for (int i=0; i<t; i++){
        vector<int> v;
        int n;
        cin >>n;
        for (int j=0; j<n; j++){
            int x;
            cin >> x;
            v.push_back(x);

        }

        sort(v.begin(), v.end());
        int minn = v[1] -v[0];
        for (int p =1; p<n; p++){
            for (int q=p+1; q<n; q++){
                if ((v[q]-v[p])<minn){
                    minn = v[q] - v[p];
                }

            }
        }


        cout << minn<< "\n";
    }

    return 0;
}
