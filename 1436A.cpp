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

    cin >>t;
    
    for (int i=0; i<t; i++){
        int n, m;
        cin >> n >> m;
        vector<int> v;
        for (int p=0; p<n; p++){
            int x;
            cin >>x;
            v.push_back(x);
        }


        int sum = accumulate(v.begin(), v.end(), 0);
        if (sum ==m){
            cout << "YES\n";
        }
        else{
            cout << "NO\n";
        }
    }

    

    return 0;
}
