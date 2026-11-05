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
        int n, d, b =0;
        vector<int> v;
       
        cin >> n>>d;

        for (int j=0; j<n; j++){
            int x;
            cin >> x;
            v.push_back(x); 
            if (x>d){
                b=1;
            }
        }

        sort(v.begin(), v.end());
        if (v[0]+v[1] <=d){
            b=0;
        }

        if (b==0){
            cout << "yes\n";
        }
        else{
            cout << "no\n";
        }

    }


   
    

    return 0;
}
