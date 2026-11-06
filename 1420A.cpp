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
        int n;
        vector<int> v;
     
        
        cin >> n;

        for (int j=0; j< n; j++){
            int x;
            cin >> x;
            v.push_back(x);
          
        }

        int o=0;
        for (int j=0; j< n-1; j++){
            if (v[j]<=v[j+1]){
                o=1;
                break;
            }
        }

        if (o==1){
            cout << "YES\n";
        }

        else {
            cout << "NO\n";
        }

     
        
   


    }

    return 0;
}
