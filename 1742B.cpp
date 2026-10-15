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
        int n;
        cin >> n;


        vector<int> arr;
        for (int j =0; j<n; j++){
            int k;
            cin >> k;
            arr.push_back(k);
        }


        int l =0;

       for (int p=0; p<n; p++){
        for (int q=p+1; q<n; q++){
            if (arr[p]==arr[q]){
                l=1;
            }

        
        }
       }

       if (l==0){
        cout << "YES\n";
       }

       else {
        cout << "NO\n";
       }

        
    }

    return 0;
}
